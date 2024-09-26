#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int ans = 0;
	for(int i=0;i<=a;i++){
		for(int j=0;j<=a;j++){
			if(i+j <=a) ans++;
			else break;
		}
	}
	printf("%d",ans);
	return 0;
}
// yang simpel
//#include <stdio.h>
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    int ans = (a + 1) * (a + 2) / 2;
//    printf("%d", ans);
//    return 0;
//}

