#include <stdio.h>
#include <string.h>

int main() {
    char word[100], ch;
    int found = 0;
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == ch) {
            found = 1;
            break;
        }
    }
    printf(found ? "yes\n" : "no\n");
    return 0;
}
