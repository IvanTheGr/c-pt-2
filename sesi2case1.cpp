#include<stdio.h>

int main(){
	int x,n;
	scanf("%d %d",&x,&n);
	int arr[x];
	
	for(int i=0;i<n;i++){
		scanf("%d",arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i] == -1){
			int indexkiri = i-1;
			int iterate = n;
			int count = 0, banyakbilangan = 0;
			while(iterate != 0 && indexkiri >= 0){
				count += arr[indexkiri];
				banyakbilangan++;
				iterate-- , indexkiri--;
			iterate = n;
			int indexkanan = i+1;
			while(iterate !=0 && indexkanan <n){
				if(arr[indexkanan] == i){
				indexkanan++,iterate--;
				}
			else{
				count += arr[indexkiri];
				indexkanan++,iterate--;
				banyakbilangan++;
			}
			}
			}
			arr[i] = count/banyakbilangan;
		}
	}
	for(int i=0;i<x;i++){
		printf("%d",arr[i]);
		if(i != x-1){
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
