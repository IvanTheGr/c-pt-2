#include<stdio.h>
#include<string.h>
//global variable -> variable yg nilainya bisa diakses dari fungsi manapun
char word[1005];
int count;


int main(){
	int t;
	scanf("%d",&t);getchar();
	for(int k=1;k<=t;k++){
		char x[1005];
		char y[1005];
		
		scanf("%[^\n]",x);getchar();
		scanf("%[^\n]",y);getchar();
		
		for(int i=0;i<strlen(x);i++){
			int flag=0;
			for(int j = 0;j<strlen(y);j++){
				if(y[j] >= 'A' && y[j] <= 'Z'){
					y[j]+=32;
				}
				if(x[i] == y[j] || x[i]+32 == y[i]){
					flag=1;
				}
			}
			if(flag==0){
				word[count]=x[i];
				count++;
			}
		}
		printf("Case #%d: %s\n",k,word);
		for(int i=0;i<strlen(word);i++){
			word[i]='\0';
		}
		count = 0;
	}
	
	return 0;
}

