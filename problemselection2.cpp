#include<stdio.h>

int main(){
int n,a,b,c;
scanf("%d",&n);
for(int i=1;i<=n;i++){
	scanf("%d %d %d",&a,&b,&c);
	if(a<=b+c){
		printf("Case #%d: yes\n",i);
	}
	else{
		printf("Case #%d: no\n",i);
	}
}
return 0;
}

