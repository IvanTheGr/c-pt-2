#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        long int N, M;
        scanf("%ld %ld", &N, &M);
        if (N*M % 2 == 0){
            printf("Case #%d: Party time!\n", i);
        }else{
        	 printf("Case #%d: Need more frogs\n", i);
		}
    }

    return 0;
}

