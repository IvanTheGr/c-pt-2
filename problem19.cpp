#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    double percentage = ((double)X / Y) * 100.0;
    
    printf("%.2lf%%\n", percentage);
    
    return 0;
}

