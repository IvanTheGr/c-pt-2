#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int t = 1; t <= T; t++) {
        int A, B;
        scanf("%d %d", &A, &B); // Read A and B

        int totalHoney = 0;
        int emptyBottles = 0;

        while (A > 0) {
            totalHoney += A; // Drink all full bottles
            emptyBottles += A; // Collect empty bottles
            A = 0;

            // Exchange empty bottles for new bottles
            int newBottles = emptyBottles / B;
            A += newBottles; // Get new bottles
            emptyBottles %= B; // Calculate remaining empty bottles
        }

        // Print the result for the current test case
        printf("Case #%d: %d\n", t, totalHoney);
    }

    return 0;
}

