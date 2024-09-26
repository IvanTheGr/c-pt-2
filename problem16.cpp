#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    double percentage = ((double)B / A) * 100;

    printf("%.4lf%%\n", percentage);

    return 0;
}

