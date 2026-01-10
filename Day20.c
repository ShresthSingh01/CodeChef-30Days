#include <stdio.h>

int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];  
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (isSorted(arr, n)) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted in ascending order.\n");
    }

    return 0;
}
