#include <stdio.h>
#include<conio.h>
#define SIZE 10

void inputArray(int *nums, int n){
    int i;
    printf("\nPlease enter %d elements in the array: \n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
}

void displayArray(int *nums, int n){
    int i;
    printf("\nThe Array elements are: \n");
    for(i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}

void swap(int *nums , int i, int j){
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}

void bubbleSort(int *nums, int n){
    int i, j;
    int swapped;
    for(i = 0; i < n; i++){
        swapped = 0;
        for(j = 0; j< n-1-i; j++){
            if(nums[j] > nums[j+1]) {
                swapped = 1;
                swap(nums, j, j+1);
            }
        }
        if(!swapped) break;
    }
}

void main(){
    int nums[SIZE];
    inputArray(nums, SIZE);
    printf("\nBefore Sorting: ");
    displayArray(nums, SIZE);
    printf("\nAfter Sorting: ");
    bubbleSort(nums, SIZE);
    displayArray(nums, SIZE);
}
