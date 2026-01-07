#include <stdio.h>

int main() {
    char str[100], temp;
    int i = 0, j;

    printf("Enter a string: ");
   
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    str[i] = '\0';  

    
    j = i - 1;  
    for (int k = 0; k < i / 2; k++) {
      
        temp = str[k];
        str[k] = str[j];
        str[j] = temp;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
