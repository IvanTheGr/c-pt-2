#include<stdio.h>

int linearSearch(int *array, int size, int search){
	for(int i = 0; i < size;i++){
		if(array[i] == search){
			return i;
		}
	}
		return -1;
}

int binarySearch(int* array,int left, int right,int search){
	if(left > right){
		return -1;
	}
	int mid = left + (right - left) / 2;
	if(array[mid] == search){
		return mid;
	}else if(search > array[mid]){
		return binarySearch(array, mid+1,right, search);
	}else if(search < array[mid]){
		return binarySearch(array, left, mid-1,search);
	}
	
	return -1;
}
int interpolationSearch(int* array,int left, int right,int search){
	if(left > right){
		return -1;
	}
	int mid = left + ((right - left) * (search - array[left])) / array[right] - array[left];
	if(array[mid] == search){
		return mid;
	}else if(search > array[mid]){
		return interpolationSearch(array, mid+1,right, search);
	}else if(search < array[mid]){
		return interpolationSearch(array, left, mid-1,search);
	}
	
	return -1;
}

void sort(int* array, int size){
	for(int i=0; i < size; i++){
		for(int j = 0;j < size - i - 1;j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int main(){
	int array[] = {60,40,30,70,100,20,80};
	int size = sizeof(array) / sizeof(array[0]);
	int search = 10;
	
	sort(array,size);
//	int index = linearSearch(array,size,search);
//	int index = binarySearch(array, 0 , size - 1,search);
	int index = interpolationSearch(array, 0 , size - 1,search);
	printf("%d\n",index);

	return 0;
}
