#include <stdio.h>

int main() {
    int X, Y;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &X, &Y);
        int product = X * Y;
        printf("%d\n", product);
    }
    
    return 0;
}

