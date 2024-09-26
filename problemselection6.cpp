#include <stdio.h>

int main(){
    long long int d,s,t;
    scanf("%lld %lld %lld", &d, &s, &t);
    if (d>=s && d>=t){
        if (s>=t){
            printf("Daging\nSayur\nTelur\n");
        }
        else {
            printf("Daging\nTelur\nSayur\n");
        }
    }
    if (s>=d && s>=t){
        if (d>=t){
            printf("Sayur\nDaging\nTelur\n");
        }
        else {
            printf("Sayur\nTelur\nDaging\n");
        }
    }
    if (t>=d && t>=s){
        if (d>=s){
            printf("Telur\nDaging\nSayur\n");
        }
        else {
            printf("Telur\nSayur\nDaging\n");
        }
    }
    return 0;
}
