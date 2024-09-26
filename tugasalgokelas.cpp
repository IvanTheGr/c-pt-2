#include<stdio.h>

struct Ipkmhs{
	char nim[11];
	char name[30];
	float gpa;
};


int main(){
	struct Ipkmhs mhs[5];
	for(int i=0;i<5;i++){
	scanf("%s",&mhs[i].nim);getchar();
	scanf("%[^\n]",&mhs[i].name);getchar();
	scanf("%f",&mhs[i].gpa);getchar();
	}
	
	for(int i=0;i<5;i++){
		if(mhs[i].gpa >= 3.0){
			printf("NIM = %s\nName = %s\nGPA = %.2f\n",mhs[i].nim, mhs[i].name, mhs[i].gpa);
		}
	}
//	for(int i=0;i<5;i++){
//		if(mhs[i].gpa < 3.0){
//			printf("NIM = %s\nName = %s\nGPA = %.2f\n",mhs[i].nim, mhs[i].name, mhs[i].gpa);
//		}
//	}
	for(int i=0;i<5;i++){
		if(mhs[i].gpa < 3.0){
			printf("Anda perlu belajar lagi")
		}
	}
	return 0;
}
