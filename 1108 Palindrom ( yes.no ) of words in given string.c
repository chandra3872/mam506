#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        if (tolower(str[start]) != tolower(str[end])) return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100], word[20];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    char *token = strtok(str, " ");
    while (token != NULL) {
        if (isPalindrome(token)) printf("Yes ");
        else printf("No ");
        token = strtok(NULL, " ");
    }
    return 0;
}
