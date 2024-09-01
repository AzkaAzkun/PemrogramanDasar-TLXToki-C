#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 10 == 0) {
            continue; // Melewati angka yang kelipatan dari 10
        } else if (i == 42) {
            printf("ERROR\n"); // Menampilkan ERROR jika angka adalah 42
            break; // Menghentikan loop
        } else {
            printf("%d\n", i); // Menampilkan angka
        }
    }

    return 0;
}
