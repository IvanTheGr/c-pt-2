#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	long long int n,hasil;
	for(int i=0;i<a;i++){
		scanf("%lld\n",&n);
	}
	for(int i=0;i<n;i++){
		if(n == 0){
			hasil = 1;
		}else if(n != 0){
		hasil = (n-1) * (n-2);
		printf("%lld",hasil);
		}
	}

	return 0;
}
