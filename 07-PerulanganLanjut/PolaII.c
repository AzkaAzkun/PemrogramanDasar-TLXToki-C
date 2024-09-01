#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Loop untuk setiap baris
    for (int i = 1; i <= N; i++) {
        // Loop untuk setiap kolom
        for (int j = 1; j <= N; j++) {
            if (j <= N - i) {
                printf(" "); // Mencetak spasi jika j kurang dari atau sama dengan N - i
            } else {
                printf("*"); // Mencetak bintang
            }
        }
        printf("\n"); // Pindah ke baris berikutnya
    }

    return 0;
}
