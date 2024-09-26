#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        char word[505]; // Maximum word length is 500, plus one for the null terminator

        scanf("%s", word);

        if (isPalindrome(word)) {
            printf("Case #%d: Yay, its a palindrome\n", i);
        } else {
            printf("Case #%d: Nah, its not a palindrome\n", i);
        }
    }

    return 0;
}

