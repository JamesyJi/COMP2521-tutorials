#include <stdio.h>
#include <string.h>

int is_palindrome(char *word);

int main(int argc, char *argv[]) {
    char word[20];
    scanf("%s", word);

    if (is_palindrome(word)) {
        printf("Is a palindrome\n");
    } else {
        printf("Is not a palindrome :(\n");
    }

    return 0;
}

int is_palindrome(char *word) {
    int i = 0;
    int j = strlen(word);

    //        i j
    while (i <= j) {
        if (word[i] != word[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}