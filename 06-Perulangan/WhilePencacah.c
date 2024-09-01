#include <stdio.h>

int main() {
    int N, total = 0;

    while (scanf("%d", &N) != EOF) {
        total += N;
    }

    printf("%d\n", total);

    return 0;
}