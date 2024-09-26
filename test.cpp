//Anagram
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	int a;
//	scanf("%d",&a);
//	getchar();
//	for(int i=0;i<a;i++){
//		char a[200],b[200];
//		scanf("%[^\n]",&a);
//		getchar();
//		scanf("%[^\n]",&b);
//		getchar();
//		
//		int len1 = strlen(a);
//		int len2 = strlen(b);
//		int num,found=0,not_found=0;
//		if(len1 == len2){
//			num = len1;
//		for(int i=0;i<num;i++){
//			found =0;
//			for(int j=0;j<num;j++){
//				if(a[i] == b[j]){
//					found=1;
//					break;
//				}
//			}
//			if(found == 0){
//				not_found=1;
//				break;
//			}
//		}
//		}
//		if(not_found == 0){
//			printf("Anagram\n");
//		}else{
//			printf("Not Anagram\n");
//		}
//	}
//	
//	return 0;
//}


//palindrome number
//#include<stdio.h>
//
//int main(){
//	int a;
//	scanf("%d",&a);
//	for(int i=0;i<a;i++){
//		int b,num,r,reversed=0,real;
//		scanf("%d",&b);
//		real = b;
//		while(b != 0){
//			r = b % 10;
//			reversed = reversed * 10 + r;
//			b /= 10;
//		}
//		if(real == reversed){
//			printf("Palindrome\n");
//		}else{
//			printf("Not Palindrome\n");
//		}
//	}
//	
//}

//palindrome string
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	int a;
//	scanf("%d",&a);
//	getchar();
//	for(int i=0;i<a;i++){
//		char ab[200];
//		scanf("%[^\n]",&ab);
//		getchar();
//		int len = strlen(ab);
//		int comp=1;
//		for(int j=0;j<len/2;j++){
//			if(ab[j] != ab[len-j-1]){
//				comp = 0;
//				break;
//			}
//		}
//		if(comp == 1){
//			printf("Palindrome\n");
//		}else{
//			printf("Not Palindrome\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
//int main(){
//	int tc; // jumlah testcase
//	scanf("%d",&tc);getchar();
//	
//	for(int t = 1;t<= tc;t++){
//		char str[10001];
//		scanf("%s",str);
//		
//		// untuk store Jumah huruf uppercase yang muncul
//		int store[26] = {0}; // inisialisasi semua jadi 0 agr tidak garbage
//		// untuk store Jumlah huruf lowercase yang muncul
//		int store2[26] = {0}; // inisialisasi semua jadi 0 agr tidak garbage
//		
//		for(int i = 0;i<strlen(str);i++){
//			if(str[i] >= 'A' && str[i] <= 'Z'){
//				// misalnya huruf B asciinya 66, kurang A ascii nya 65
//				// 66-65 = 1 maka index 1 store akan ditambah 1;
//				store[str[i] - 'A'] ++; 
//			}
//			else if(str[i] >= 'a' && str[i] <= 'z'){
//				store2[str[i] - 'a'] ++; 
//			}
//		}
//		
//		printf("Case #%d: ",t);
//		for(int i = 0;i<26;i++){
//			
//			for(int j = 0;j<store[i];j++){
//				printf("%c",'A' + i);
//			}
//			for(int j = 0;j<store2[i];j++){
//				printf("%c",'a' + i);
//			}
//		}
//		printf("\n");
//		
//		
//	}
//	
//	
//	return 0;
//}

