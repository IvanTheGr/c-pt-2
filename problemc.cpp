#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	double c=((double)(a-b)/a)*100;
	printf("%.2lf%%\n",c);
	return 0;
}
