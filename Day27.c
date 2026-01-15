#include <stdio.h>

void rotateRight(int arr[], int size) {
    int temp = arr[size - 1];  
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = temp;  
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    rotateRight(arr, size);  

    printf("\nArray after rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}


