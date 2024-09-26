#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	double d =(0.2 *a) + (0.3 *b) + (0.5 *c);
	printf("%.2lf\n",d);
	return 0;
}
