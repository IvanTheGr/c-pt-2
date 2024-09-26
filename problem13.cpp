#include <stdio.h>

int main() {
    char char1, char2;
    scanf("%c %c", &char1, &char2);

    int ascii1 = (int)char1;
    int ascii2 = (int)char2;

    int product = ascii1 * ascii2;

    printf("%d\n", product);

    return 0;
}

