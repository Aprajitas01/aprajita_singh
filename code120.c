#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);  

    int new_word = 1; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (new_word && str[i] != ' ') {
            str[i] = toupper(str[i]);  
            new_word = 0;
        } else if (str[i] == ' ') {
            new_word = 1; 
        } else {
            str[i] = tolower(str[i]); 
        }
    }

    printf("%s", str);
    return 0;
}