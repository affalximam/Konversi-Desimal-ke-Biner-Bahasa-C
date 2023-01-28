#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(void){

    int biner[10], desimal, i;
    char ulang;

    top:
    clear();
    printf("\n-------------------------\n");
    printf("Konversi Desimal ke Biner\n");
    printf("By : AFFALXIMAM\n");
    printf("-------------------------\n\n");

    printf("Masukan angka Desimal : ");
    scanf(" %d", &desimal);

    for(i = 0; desimal > 0; i++){
        biner[i] = desimal % 2;
        desimal = desimal / 2;
    }

    printf("Angka Biner adalah : ");

    for(i = i-1; i >= 0; i--){
        printf("%d", biner[i]);
    }

    printf("\n\n");

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
        if(ulang == 'y'){
            goto top;
        }
        if(ulang == 't'){
            printf("\nProgram Selesai");
        }
        else{
            goto cek;
        }
    return 0;

}