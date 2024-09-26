#include <stdio.h>

int main() {
    long int N;
    scanf("%ld", &N);

    int totalAmount = 0;

    for (int i = 0; i < N; i++) {
        long int Ai;
        scanf("%ld", &Ai);

        totalAmount += Ai;
    }

    printf("%d\n", totalAmount); // Print the total amount Bibi owes
    return 0;
}

