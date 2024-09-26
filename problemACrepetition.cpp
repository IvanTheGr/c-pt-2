#include<stdio.h>

int main(){
	int tc;
	scanf("%d",&tc);
	for(int i=1;i<=tc;i++){
		long long int n,m;
		scanf("%lld %lld",&n,&m);
		int min = 1e7;
		for(int j=1;j<=n;j++){
			int candy;
			scanf("%d",&candy);
			if(candy < min) min = candy;
		}	
		long long int ans = m/min;
		printf("Case #%d: %lld\n",i,ans);
		}
	return 0;
}
