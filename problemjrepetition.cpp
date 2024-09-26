#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); // Read the number of item types

        long long totalItems = 0; // Use long long to handle large item counts

        for (int i = 0; i < N; i++) {
            long long int ai;
            scanf("%lld", &ai); // Read the number of items for each type
            totalItems += ai; // Add to the total
        }

        // Print the result for the current test case
        printf("Case #%d: %lld\n", t, totalItems);
    }

    return 0;
}

