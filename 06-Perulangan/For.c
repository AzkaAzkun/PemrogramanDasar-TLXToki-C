#include <stdio.h>

int main() {
    int N, M;
    int total = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &M);
        total += M;
    }

    printf("%d\n", total);

    return 0;
}
