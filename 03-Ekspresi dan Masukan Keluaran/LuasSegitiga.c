#include <stdio.h>

int main(){
    int A,T;
    scanf("%d%d",&A,&T);
    printf("%.2f\n",(float)(A*T)/2);
    /*
    untuk mengeprint 2 angka di belakang koma maka menggunakan %.2f
    jika 3 maka %.3f dan seterusnya

    menaruh tipe data di depan variabel akan mengubah tipe datanya
    int A = 2
    A adalah integer
    printf("%.2f",(float)A);
    tipe data dari A akan menjadi float
    */
   return 0;
}