#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

   	int a,b,c,d,e,f;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
	scanf("%d %d", &e, &f);
	
    double result1 = (a / 100.0) * b;
    double result2 = (c / 100.0) * d;
    double result3 = (e / 100.0) * f;

        printf("%.2lf\n%.2lf\n%.2lf\n", result1,result2,result3);


    return 0;
}

