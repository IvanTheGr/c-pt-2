#include <stdio.h>
#include <math.h>

int main() {
    int X;
    double Y;
    scanf("%d %lf", &X, &Y);

    double finalAmount = X * pow(1 + Y / 100, 3);

    finalAmount = round(finalAmount * 100) / 100;

    printf("%.2lf\n", finalAmount);

    return 0;
}

