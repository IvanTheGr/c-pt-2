#include <stdio.h>
#include <string.h>

int main(){
    int tc,flag,afterDots,dots;
    char b[110];
    scanf("%d",&tc);getchar();
    for(int i=1;i<=tc;i++){
        flag=1;
        afterDots=1;
        dots=0;
        scanf("%[^\n]",&b);getchar();
        int len=strlen(b);
        for(int j=0;j<len;j++){
            if(b[j]=='.'){
                if(afterDots)flag=0;
                dots++;
                afterDots=1;
            }
            else afterDots=0;
        }
        printf("Case #%d: ",i);
        (dots==5 && flag)? printf("YES\n"): printf("NO\n");
    }
}
