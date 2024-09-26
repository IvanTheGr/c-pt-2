#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		int r,h;
		scanf("%d %d",&r,&h);
		float surface = (2 * 3.14 * r * h) + (2 * 3.14 * r * r);
		printf("Case #%d: %.2f\n",i+1,surface);
	}
	
	return 0;
}
