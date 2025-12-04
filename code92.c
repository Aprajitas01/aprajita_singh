#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[26] = {0};  
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) { 
                printf("Repeating alphabet:\n%c\n", str[i]);
                return 0;
            }
        }
    }

    printf("Output:\nNo repeating lowercase alphabet found.\n");
    return 0;
}