#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int sets[n+5];
	int cur = 0, steps =0;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		if(x == steps+1) steps = x;
		else{
			sets[cur] = steps;
			steps = x;
			cur++;
		}
	}
//	if(steps != 1){
		sets[cur] = steps;
		cur++;
//	}
	for(int i=0;i<cur;i++){
		if(i!=0)printf(" ");
		printf("%d",sets[i]);
	}
	printf("\n");
	return 0;
}
