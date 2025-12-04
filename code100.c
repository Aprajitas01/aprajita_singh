#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("Output:\n");

    for (int i = 0; i < len; i++) {       
        for (int j = i; j < len; j++) {   
            for (int k = i; k <= j; k++) 
                printf("%c", str[k]);
            printf(",");                   
    }

    printf("\n");
    return 0;
}