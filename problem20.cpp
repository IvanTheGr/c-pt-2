#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    double discountPercentage = ((double)(A - B) / A) * 100.0;
    printf("%.2lf%%\n", discountPercentage);
    
    return 0;
}

