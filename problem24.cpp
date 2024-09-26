#include <stdio.h>

int main()
{
	long long int a, b, c, d;
	long long int e, f, g, h;
	long long int i, j, k, l;
	
	scanf("(%lld+%lld)x(%lld-%lld)\n", &a, &b, &c, &d);
	scanf("(%lld+%lld)x(%lld-%lld)\n", &e, &f, &g, &h);
	scanf("(%lld+%lld)x(%lld-%lld)", &i, &j, &k, &l);
	
	long long int x = (a + b) * (c - d);
	long long int y = (e + f) * (g - h);
	long long int z = (i + j) * (k - l);
	
	printf("%lld %lld %lld\n", x, y, z);
	
	return 0;
	
}
