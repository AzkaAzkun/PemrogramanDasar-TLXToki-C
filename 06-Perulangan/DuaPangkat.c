#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Mengeliminasi faktor 2 dari N
    while (N % 2 == 0) {
        N /= 2;
    }

    if (N == 1) {
        printf("ya\n");
    } else {
        printf("bukan\n");
    }

    return 0;
}

/*
Penjelasan:

misal angka 8
kita bagi terus selama masih bisa dibagi dua
maka hasilnya adalah 1

kalau angka 6
akan berhenti di 6/2 = 3
angka 3
*/