#include<stdio.h>

int main(){
	int n;
	int ans=0;
	scanf("%d",&n);getchar();
	
	int kamar[n+5];
	for(int i=0;i<n;i++){
		scanf("%d",&kamar[i]);getchar();
	}
	
	int idx=0;
	int l=0;
	int flag=1;
	
	for(int i=0;i<n;i++){
		flag=1;
		for(int j=i-1;j>=0;j--){
			if(kamar[j] == kamar[i]){
				flag=0;
				break;
			}
		}
		if(flag == 1) ans++;
		}
		printf("%d\n",ans);
	
	return 0;
}
