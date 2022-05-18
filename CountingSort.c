#include <stdio.h>
#define SIZE 20

void displayArray(int[], int);
void countingSort(int[], int);
void main()
{
    int nums[SIZE] = {5,4,3,2,3,4,5,1,3,1,4,5,6,8,6,7,7,1,5,3};
    int range = 8;
    countingSort(nums, range);
}
void countingSort(int nums[], int range){
    int freq[range+1];
    int out[SIZE+1];
    int i;
    for(i = 0; i < range+1; i++){
        freq[i] = 0;
    }
    for(i = 0; i < SIZE; i++){
        freq[nums[i]]++;
    }
    // displayArray(nums, SIZE);
    for(i = 0; i < range+1; i++){
        freq[i] = freq[i] + freq[i-1];
    }
    // displayArray(freq, SIZE);
    for(i = 0; i < SIZE; i++){
        out[freq[nums[i]]] = nums[i];
        freq[nums[i]]--;
    }
    displayArray(out, SIZE+1);
}
void displayArray(int nums[], int size){
    int i;
    printf("\nThe array is: \n");
    for(i = 1; i < size; i++){
        printf("%d ", nums[i]);
    }
}
