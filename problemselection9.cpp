#include<stdio.h>

int main(){
	long int t;
	scanf("%ld",&t);
	long long int a,c;
	int b;
	for(int i=1;i<=t;i++){
		scanf("%lld %d %lld",&a,&b,&c);
		int cb = (a*b)/100;
		if(cb>c){
			cb=c;
		}
		printf("Case #%d: %d\n",i,cb);
	}
	return 0;
}
