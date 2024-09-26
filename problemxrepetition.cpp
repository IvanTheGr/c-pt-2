#include <stdio.h>

int main() {
    int Q;
    scanf("%d", &Q);

    int N = 1; // Initialize N to 1

    for (int i = 0; i < Q; i++) {
        // Multiply N by 2 and add 1
        N = N * 2 + 1;
    }

    printf("%d\n", N); // Print the final value of N
    return 0;
}

