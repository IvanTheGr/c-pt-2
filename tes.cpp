#include<stdio.h>
#include<string.h>


int main(){
	char string[105];
	scanf("%s",string);
	int palindrome = 1;
	int len = strlen(string);
	for(int i=0;i<len/2;i++){
		if(string[i] == string[i-len-1]){
			palindrome = 0;
			break;
		}
	}
		if(palindrome){
			printf("%s its palindrome\n",string);
		}else{
			printf("%s Not palindrome\n",string);
		}
	return 0;
}
