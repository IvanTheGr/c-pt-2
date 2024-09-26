#include<stdio.h>

int main(){
	long int n;
	scanf("%ld",&n);
	int total = 0;
	for(int i=0;i<n;i++){
		long long int a;
		scanf("%lld",&a);
		total += a; 
	}
	printf("%d\n",total);
	return 0;
}
