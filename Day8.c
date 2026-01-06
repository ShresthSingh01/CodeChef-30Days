#include <stdio.h>

int main() {
    int num, sum = 0, originalNum, remainder, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = originalNum; 

   
    while (num != 0) {
        remainder = num % 10;


        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;  
        num /= 10;    
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
