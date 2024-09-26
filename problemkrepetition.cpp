#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); // Read the height and base of the triangle

        // Print the header for the current test case
        printf("Case #%d:\n", t);

        // Determine whether to use '*' or '#' based on the sum of row and column
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                if (j == 1) {
                    printf("*");
                } else {
                    printf("#");
                }
            }
            printf("\n"); // Move to the next row
        }

        // Print a newline after each test case except the last one
        if (t < T) {
            printf("\n");
        }
    }

    return 0;
}

