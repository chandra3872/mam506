#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i]) {
        if (isalpha(str[i]) && (i == 0 || !isalpha(str[i-1]))) {
            count++;
        }
        i++;
    }

    printf("Number of words: %d\n", count);
    return 0;
}
