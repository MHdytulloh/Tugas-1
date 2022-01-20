#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int A;
    int pindahkeA;
    int B;
    int pindahkeB;
    int perintah;

    /*Algoritma*/
    A = 0;
    B = 0;
    while (B!=4) {
        printf("Air pada ember A = %i", A);
        printf("\n");
        printf("Air pada ember B = %i", B);
        printf("\n");
        printf("Perintah yang tersedia :");
        printf("\n");
        printf("1. Mengisi ember A");
        printf("\n");
        printf("2. Mengisi ember B");
        printf("\n");
        printf("3. Mengosongkan ember A");
        printf("\n");
        printf("4. Mengosongkan ember B");
        printf("\n");
        printf("5. Memindahkan air dari ember A ke B sampai penuh");
        printf("\n");
        printf("6. Memindahkan air dari ember B ke A sampai penuh");
        printf("\n");
        printf("Masukkan perintah :");
        scanf ("%i", &perintah);
        printf("\n");

        if (perintah == 1) {
            A = 3;
        }
        else if (perintah == 2) {
            B = 5;
        }
        else if (perintah == 3) {
            A = 0;
        }
        else if (perintah == 4) {
            B = 0;
        }
        else if (perintah == 5) {
            if ((A==3)&&(B==0)) {
                A=0;
                B=3;
            }
            else if ((A<3)&&(B==0)) {
                B+=A;
                A=0;
            }
            else if ((A==3)&&(B<5 && B>0)) {
                pindahkeB = 5-B;
                if (A<=pindahkeB) {
                    pindahkeB=A;
                }
                else if (A>pindahkeB) {
                    pindahkeB=pindahkeB;
                }
                A-=pindahkeB;
                B+=pindahkeB;
            }
            else if ((A<3)&&(B<5 && B>0)) {
                pindahkeB = 5-B;
                if (A<=pindahkeB) {
                    pindahkeB=A;
                }
                else if (A>pindahkeB) {
                    pindahkeB=pindahkeB;
                }
                A-=pindahkeB;
                B+=pindahkeB;
            }
        }
        else {
            printf("perintah invalid!");
            printf("\n");
        }
    }

    return 0;
}

