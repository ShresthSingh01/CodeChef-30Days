#include <stdio.h>

int maxSubArraySum(int arr[], int size) {
    int max_so_far = arr[0];  
    int max_ending_here = arr[0];  
    
    
    for (int i = 1; i < size; i++) {
        max_ending_here = (max_ending_here + arr[i] > arr[i]) ? (max_ending_here + arr[i]) : arr[i];
        max_so_far = (max_so_far > max_ending_here) ? max_so_far : max_ending_here;
    }
    
    return max_so_far; 
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum subarray sum is %d\n", maxSubArraySum(arr, size));

    return 0;
}
