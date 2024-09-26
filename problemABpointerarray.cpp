#include <stdio.h>

void multiply_matrices(int A[][50], int B[][50], int result[][50], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = 0;
            for (int k = 0; k < N; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    for (int case_number = 1; case_number <= T; case_number++) {
        int N;
        scanf("%d", &N);

        int matrices[3][50][50];
        int result[50][50];

        // Read the three matrices
        for (int m = 0; m < 3; m++) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    scanf("%d", &matrices[m][i][j]);
                }
            }
        }

        // Multiply the matrices
        for (int m = 0; m < N; m++) {
            for (int n = 0; n < N; n++) {
                result[m][n] = matrices[0][m][n];
            }
        }

        for (int m = 1; m < 3; m++) {
            multiply_matrices(result, matrices[m], result, N);
        }

        // Print the result
        printf("Case #%d:\n", case_number);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d", result[i][j]);
                if (j < N - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

