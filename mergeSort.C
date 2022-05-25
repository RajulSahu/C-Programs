#include<stdio.h>
#include<conio.h>

// Merge sort

void mergeSort(int nums[], int n){
    
}

void mergeSortedArray(int left[], int right[]){
    int n = sizeof(left)/sizeof(left[0]);
    int m = sizeof(right)/sizeof(right[0]);
    int arr[n+m];
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < n && j < m){
        if(left[i] < right[j]){
            arr[k] = left[i];
            i++;
        }
        else{
            arr[k] = right[k];
            j++;
        }
        k++;
    }
    while(i < n){
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j < m){
        arr[k] = right[k];
        j++;
        k++;
    }
}

void inputArray(int nums[], int n){
    int i;
    printf("\nEnter the Elements of the array: \n");
    for(i = 0; i < n; i++){
        scanf("%d ", &nums[i]);
    }
}

void displayArray(int nums[], int n){
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
    mergeSort(nums, 10);
    displayArray(nums, 10);
    getch();
}