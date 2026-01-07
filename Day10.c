#include <stdio.h>

int main() {
    int num, reverse = 0, remainder, originalNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; 
    while (num != 0) {
        remainder = num % 10;            
        reverse = reverse * 10 + remainder;  
        num /= 10;                       
    }

    if (originalNum == reverse) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
