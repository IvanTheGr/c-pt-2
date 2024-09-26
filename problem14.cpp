#include <stdio.h>

int main() {
    int a, b, c, d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int e,f,g,h;
	scanf("%d %d %d %d",&e,&f,&g,&h);
	int i,j,k,l;
	scanf("%d %d %d %d",&i,&j,&k,&l);
	double ele= (double)((2*a)/1 + (4*b)/2 + (6*c)/3 + (4*d)/4);
	double ela= (double)((2*e)/1 + (4*f)/2 + (6*g)/3 + (4*h)/4);
	double elo= (double)((2*i)/1 + (4*j)/2 + (6*k)/3 + (4*l)/4);
	printf("%.2lf\n%.2lf\n%.2lf\n",ele,ela,elo);

    return 0;
}

