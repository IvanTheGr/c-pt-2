#include <stdio.h>

int main(){
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    if (a+b==c*2 && a<=b){
        printf("%d\n", b-c);
    }
    else{
        printf("-1\n");
    }
    return 0;
}
