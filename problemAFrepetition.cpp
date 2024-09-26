#include<stdio.h>

int bit_on(int x){
	int ct=0;
	while(0<x){
		if(x % 2 == 1)ct++;
		x /=2;
	}
	return ct;
}


void solve(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ans1=0,ans2=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int tmp = (a[i] ^ a[j]) ;
			if(bit_on(tmp) >= 3){
			ans1++;	
			}else{
				ans2++;
			}
		}
	}
	printf("%d %d\n",ans1,ans2);
}

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		printf("Case #%d: ",i);
		solve();
	}
	return 0;
}
