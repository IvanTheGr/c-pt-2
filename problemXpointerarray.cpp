#include<stdio.h>

int main(){
	int a,b,c;
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++){
		scanf("%d %d",&b,&c);
		long long int d[b][c];
		long long int t=0;
	
	
		for(int q=0;q<b;q++){
			int f=0;
			for(int w=0;w<c;w++){
				scanf("%lld",&d[q][w]);
				
					if (d[q][w]>=f){
						f = d [q][w];
					}
				}
				t+=f;
			}
			printf("Case #%d: %lld\n",i,t);
		}
	return 0;
	}
	
		
	
	
	

