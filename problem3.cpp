#include <stdio.h>

int main() {
    long long int N;
    long long int total =0;
    scanf("%lld", &N);
	total = ((N*100) + (25*N)*(N-1));
    printf("%lld\n", total);

    return 0;
}

