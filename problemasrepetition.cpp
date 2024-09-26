#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    for (int t = 1; t <= T; t++) {
        int N;
        scanf("%d", &N); // Read the number of questions

        char S[101], K[101];
        scanf("%s", S); // Read Lili's answers
        scanf("%s", K); // Read the answer key

        int correct = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == K[i]) {
                correct++; // Count the correct answers
            }
        }

        // Calculate Lili's grade as a percentage and round down
        int grade = (correct * 100) / N;

        // Print the result for the current test case
        printf("Case #%d: %d\n", t, grade);
    }

    return 0;
}

