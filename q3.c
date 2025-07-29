#include <stdio.h>
#include <string.h> 

int main() {
    char str[100];
    char temp;     
    int i, j;      

    printf("Enter a string: ");
  
    fgets(str, sizeof(str), stdin);

   
    str[strcspn(str, "\n")] = 0;

    int length = strlen(str); // Get the length of the string

    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
