//A 
#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//D
//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	int m;
//	scanf("%d",&m);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			printf("*");
//	}
//	printf("\n");
//}
//	return 0;
//}

//c
//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n-i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//B 
//#include<stdio.h>
//
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//E 
//#include<stdio.h>
//
//int main(){
//	int a;
//	scanf("%d",&a);
//	for(int i=0;i<a;i++){
//		for(int j=0;j<a;j++){
//			if(i == 0 || j == 0 || i == a-1 || j == a-1){
//				printf("*");
//			}else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
