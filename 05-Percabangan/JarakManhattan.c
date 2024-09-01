#include <stdio.h>

int main() {
    int a, b, c, d;
    int hasilX, hasilY, total;

    // Membaca input dari pengguna
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // Menghitung selisih absolut
    hasilX = a - c;
    hasilY = b - d;

    // Mengubah hasil menjadi nilai absolut jika negatif
    if (hasilX < 0) {
        hasilX *= -1;
    }
    if (hasilY < 0) {
        hasilY *= -1;
    }

    // Menghitung total
    total = hasilX + hasilY;

    // Menampilkan hasil
    printf("%d\n", total);

    return 0;
}