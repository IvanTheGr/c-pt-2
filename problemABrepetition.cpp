#include<stdio.h>



int main(){
	int tc,ans;
	scanf("%d",&tc);
	long int a,b,c,d,e;
	for(int i=0;i<tc;i++){
		ans = 0;
		scanf("%ld ",&a);
		scanf("%ld %ld %ld %ld",&b,&c,&d,&e);
		for(int j=1;j<=a;j++){
			if((j % b ) == 0 || (j % c ) == 0 || (j % d ) == 0 || (j % e ) == 0){
				ans++;
			}
		}
		printf("Case #%d: %d\n",i+1,ans);
		
	}
	return 0;
}
