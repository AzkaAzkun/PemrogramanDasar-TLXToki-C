#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Mencetak semua pembagi dari N dalam urutan menurun
    for (int i = N; i >= 1; i--) {
        // jika dapat dibagi dengan i maka keluarkan angkanya
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
