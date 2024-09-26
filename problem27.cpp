#include <stdio.h>

int main()
{
	int t;
	long long int a,b,c,d,e, f;
	scanf("%d", &t);
	scanf("%lld %lld", &a, &b);
	scanf("%lld %lld", &c, &d);
	scanf("%lld %lld", &e, &f);
	
	double x = (double)a/360 * b;
	double y = (double)c/360 * d;
	double z = (double)e/360 * f;
	
	printf("%.2lf\n", x);
	printf("%.2lf\n", y);
	printf("%.2lf\n", z);
	
	return 0;
}
