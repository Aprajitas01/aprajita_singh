#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i=0,j=0;
    char ch;
    printf ("Enter string\n");
    fgets (str, sizeof(str), stdin);
     while (str[i] != '\0') {
        char ch = str[i];
        if (!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            str[j++] = str[i];  
        }
        i++;
    }
    str[j] = '\0';  

    printf("String without vowels: %s\n", str);
    return 0;
   
}