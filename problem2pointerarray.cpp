#include<stdio.h>

int main(){
	long int n;
	scanf("%d",&n);
	long long int room[n];
	for(int i=0;i<n;i++){
		scanf("%lld",room[i]);
		int nilai = 0;
	if(room[i] == room[i + 1]){
		nilai += 1;
	}
	printf("%lld\n",nilai);	
	}
	return 0;
}
