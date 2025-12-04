#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    printf("Enter a name:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int lastSpace = -1;

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    printf("Output:\n");

    if (str[0] != ' ')
        printf("%c.", toupper(str[0]));

    for (int i = 0; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            printf("%c.", toupper(str[i + 1]));
    }

    if (lastSpace != -1) {
        printf(" %s\n", &str[lastSpace + 1]);
    } else {
        printf("%s\n", str);
    }

    return 0;
}