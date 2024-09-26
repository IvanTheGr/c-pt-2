#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		int n;
		scanf("%d",&n);
		int x[n+5];
		int ans = 2e9;
		for(int j=1;j<=n;j++){
		scanf("%d", &x[j]);	
		}
		for(int j=1;j<n;j++){
			int beda = (x[j] - x[j+1]);
			if(beda < 0) beda *= -1;
			if(beda < ans) ans = beda;
		}
		printf("Case #%d: %d\n",i,ans);
		
	}
	return 0;
}
