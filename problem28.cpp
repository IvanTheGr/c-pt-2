#include<stdio.h>

int main(){
	double c,r,f,k;
	scanf("%lf %lf %lf %lf",&c,&r,&f,&k);
	printf("%.2lf %.2lf %.2lf\n", 4*r/5, 9*r/5+32, r+273);
	printf("%.2lf %.2lf %.2lf\n", 4*f/5, 9*f/5+32, f+273);
	printf("%.2lf %.2lf %.2lf\n", 4*k/5, 9*k/5+32, k+273);
	return 0;
}
