#include <stdio.h>


int main() {
    double L, B, H;

    scanf("%lf %lf %lf", &L, &B, &H);

    double a = 3 * B;
	double c = (a * L) + (B * H);

    printf("%.3lf\n", c);

    return 0;
}
