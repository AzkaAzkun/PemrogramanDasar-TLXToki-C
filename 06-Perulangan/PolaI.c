#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= N; i++) {
        // Mengganti dengan * jika dapat dibagi dengan K
        if (i % K == 0) {
            printf("*");
        } else {
            printf("%d", i);
        }

        // Menambahkan spasi jika bukan angka terakhir
        // ada beberapa kasus jika dibelakang ada spasi maka dianggap salah
        if (i != N) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}