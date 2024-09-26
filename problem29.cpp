#include <stdio.h>

int main() {
    int N1, N2, N3;

    scanf("%d", &N1);
    scanf("%d", &N2);
    scanf("%d", &N3);

    int middle1 = (N1 / 10) % 10;
    int middle2 = (N2 / 10) % 10;
    int middle3 = (N3 / 10) % 10;

    printf("%d\n", middle1);
    printf("%d\n", middle2);
    printf("%d\n", middle3);

    return 0;
}

