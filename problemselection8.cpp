#include <stdio.h>

int main() {
    char block1, block2, block3;
    scanf(" %c %c %c", &block1, &block2, &block3);

    if (block1 <= block2 && block2 <= block3) {
        printf("1 2 3\n");
    } else if (block1 <= block3 && block3 <= block2) {
        printf("1 3 2\n");
    } else if (block2 <= block1 && block1 <= block3) {
        printf("2 1 3\n");
    } else if (block2 <= block3 && block3 <= block1) {
        printf("2 3 1\n");
    } else if (block3 <= block1 && block1 <= block2) {
        printf("3 1 2\n");
    } else { 
        printf("3 2 1\n");
    }

    return 0;
}

