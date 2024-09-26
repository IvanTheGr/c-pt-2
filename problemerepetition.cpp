#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i=0;i<T;i++){
        long long int X, P;
        scanf("%lld %lld", &X, &P);
        int bit = (X >> P) & 1;

        printf("%d\n", bit);
    }

    return 0;
}

