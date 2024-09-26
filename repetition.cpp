//REPETITION => UNTUK MENJALANKAN ATAU RUN BARIS CODE TERTENTU BERULANG KALI SAMPAI KETENTUAN TERTENTU

#include <stdio.h>
int main(){
	//FOR, WHILE, DO WHILE
	//FOR (INT MULAI; INT KONDISI CONTOH <5; I++ ATAU I--
	//STOP KETEIKA UDAH GA MEMENUHI KONDISI
	//INDEX SELALU MULAI DARI NOL BUKAN SATU
//	for (int i = 5; i<10; i++){
//		printf("%d\n", i);
//		printf("I LOVE YOU\n");
//	}
//	for (int i = 10; i<10; i--){
//		printf("%d\n", i);
//		printf("I LOVE YOU\n");
//	}
	//iterasi pertama = 10
//	i-- =>10-1=9
//	iterasi 3 i=8
//	iterasi 4 i=7
//	iterasi 5 i=6
//	iterasi 6 i=5 -> salah kondisi (i>5)

//WHILE 
//int a=0;
//while (a<3){
//	printf("hello\n");
//	printf("%d\n", a);
//	a++;
//}
//	//DO WHILE
//	int b = 0;
//	do {
//	printf("hello\n");
//	printf("%d\n", b);
//	b++;	
//	} while (b<3);
//	//condition < > <= >=
	
//	for (int i = 0; i < 10; i++){
//		printf("%d\n", i);
//		printf("I LOVE YOU\n");
//		if(i == 4){
//			break;
//		//stop or terminate
//		//continue;
//		//ttp jalan
//		}
//		for (int i = 5 ; i < 10; i--){
//		printf("%d\n", i);
//		printf("I LOVE YOU\n");	
//	}
	//ketika conditionnya true -> ngerun codenya -> jadi infinite loop
	
//	int a = 0;
//	While(a < 15){
//		printf("I love you\n");
//		printf("%d\n", a);
//		a+=3;
//	}
//nested loop
for(int i= 0; i<5; i++){
	for(int j = 0; j < 5; j++){
		printf("i =%d dan j = %d\n", i, j);
	}
}
	return 0;
//}
}
