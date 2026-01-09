#include <stdio.h>

int main() {
    int n, target, index = -1;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to find: ");
    scanf("%d", &target);
 
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;  
            break; 
        }
    }
    if (index != -1) {
        printf("The target element %d is at index %d.\n", target, index);
    } else {
        printf("The target element %d is not in the array.\n", target);
    }

    return 0;
}
