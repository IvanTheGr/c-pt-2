#include<stdio.h>

int main(){
	
	int tc;
	scanf("%d",&tc);
	for(int t=1;t<=tc;t++){
		long long int len,p;
		scanf("%lld %lld",&len,&p);
		char pjg[len+1];
		scanf("%s",pjg);
		
		int alive;
		int index1 = -1, index2 = -1;
		for(int i=0;i<len;i++){
			if(pjg[i] == '1'){
				index1 = i;
				break;
			}
		}
		for(int i = len-1;i>=0;i--){
			if(pjg[i] == '1'){
				index2 = i;
				break;
			}
		}
		if(len<=p) alive =1;
		else if(index1 == index2) alive =0;
		else if(index1 < p && len-1-index2 < p) alive = 1;
		else alive = 0;
		
		if(alive == 1)printf("Case #%d: %lld\n",t);
		else printf("Case #%lld: Dead\n");
	}
	
	return 0;
}
