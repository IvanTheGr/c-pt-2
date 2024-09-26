#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char photo[n][n];

    // Input photo
    for (int i = 0; i < n; i++) {
        scanf("%s", photo[i]);
    }

    // buat ngeflip vertically
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            char temp = photo[i][j];
            photo[i][j] = photo[n - 1 - i][j];
            photo[n - 1 - i][j] = temp;
        printf("%d\n",photo[n-1-i][j]);
        }
    }

    // buat ngeflip horizontally
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            char temp = photo[i][j];
            photo[i][j] = photo[i][n - 1 - j];
            photo[i][n - 1 - j] = temp;
            printf("%d\n",photo[i][n-1-j]);
        }
    }

    // Output photo yg sdh diedit
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", photo[i][j]);
        }
        printf("\n");
    }

    return 0;
}

