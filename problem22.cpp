#include <stdio.h>

int main() {
    int N, P;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &N, &P);
        double undiscountedPrice = (double)P / ((100 - N) / 100.0);
        printf("$%.2lf\n", undiscountedPrice);
    }
    
    return 0;
}

