#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; ++i) {
        long long N;
        scanf("%lld", &N);

        // Calculate the length of the integer using logarithm
        int length = (int)log10(N) + 1;

        // Print the result
        printf("Case #%d: %d\n", i, length);
    }

    return 0;
}

