#include<stdio.h>

int main(){
	int a,b;
	double c;
	scanf("%d %d",&a,&b);
	c=((double)a/b)*100;
	printf("%.2lf%%\n",c);
	return 0;
}
