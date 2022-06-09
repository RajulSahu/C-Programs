#include<stdio.h>
#define SIZE 20


void displayArray(int *nums, int n){
    int i;
    printf("\nThe Array elements are: \n");
    for(i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}

void countingSort(int *nums, int n, int range){
    range++;
    int freq[range];
    int output[SIZE];
    int i;
    
    // Fill zeros in frequency array
    for (i = 0; i < range; i++) {
        freq[i] = 0;
    }
    
    // Fill frequencies of each elements
    for(i = 0; i < n; i++){
        freq[nums[i]]++;
    }
    
    // Find Cumulative frequencies
    for(i = 1; i < range; i++){
        freq[i] = freq[i]+freq[i-1];
    }
    
    // Filling the output Array
    for(i = n-1; i >= 0; i--){
        output[freq[nums[i]]-1] = nums[i];
        freq[nums[i]]--;
    }
    displayArray(output, SIZE);
}

void main()
{
    int nums[SIZE] = {5,4,3,2,3,4,5,1,3,1,4,5,6,8,6,7,7,1,5,3};
    int range = 8;
    printf("\nBefore Sorting: ");
    displayArray(nums, SIZE);
    printf("\nAfter Sorting: ");
    countingSort(nums, SIZE, range);
}
