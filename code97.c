#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a name:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Output:\n");
    if (str[0] != ' ')
        printf("%c.", toupper(str[0]));

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
            printf("%c.", toupper(str[i + 1]));
    }

    printf("\n");
    return 0;
}
















