#include<stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	int a,b,c,d;
	int e,f,g,h;
	int i,j,k,l;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	scanf("%d %d %d %d",&e,&f,&g,&h);
	scanf("%d %d %d %d",&i,&j,&k,&l);
	double a1 = (double) (2*a)/1 + (double) (4*b)/2 + (double) (4*c)/3 + (double) (2*d)/4;
	double a2 = (double) (2*e)/1 + (double) (4*f)/2 + (double) (4*g)/3 + (double) (2*h)/4;
	double a3 = (double) (2*i)/1 + (double) (4*j)/2 + (double) (4*k)/3 + (double) (2*l)/4;
	printf("%.2f\n",a1);
	printf("%.2f\n",a2);
	printf("%.2f\n",a3);
	return 0;
}
