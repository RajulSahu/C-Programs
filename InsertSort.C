#include<stdio.h>
#include<conio.h>

// Insertion sort

void sort(int nums[10], int n){
    int i;
    for(i = 0; i < n; i++){
        int key = nums[i];
        int j = i-1;
        int temp = nums[i];
        while(j >= 0 && nums[j] > temp){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

void inputArray(int nums[10], int n){
    int i;
    printf("\nEnter the Elements of the array: \n");
    for(i = 0; i < n; i++){
        scanf("%d ", &nums[i]);
    }
}

void displayArray(int nums[10], int n){
    int i;
    printf("\nThe Elements of the array are: \n");
    for(i = 0; i < n; i++){
        printf("%d ", nums[i]);
    }
}

void main(){
    int nums[10];
    clrscr();
    inputArray(nums,10);
    printf("\nBefore Sorting: ");
    displayArray(nums, 10);
    
    printf("\nAfter Sorting: ");
    sort(nums, 10);
    displayArray(nums, 10);
    getch();
}
