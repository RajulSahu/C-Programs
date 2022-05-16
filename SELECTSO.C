#include<stdio.h>
#include<conio.h>
void inputArray(int nums[10])
{
	int i;
	printf("Enter 10 elements in the array \n");
	for(i = 0; i < 10; i++){
		scanf("%d", &nums[i]);
	}
}
void displayArray(int nums[10])
{
	int i;
	printf("The elements of the array are: \n");
	for(i = 0; i < 10; i++){
		printf("%d ", nums[i]);
	}
}

int findMinIndex(int nums[10], int start, int end)
{
	int min = nums[start], idx = start, i;
	for(i = start; i < end; i++){
	   if(nums[i] < min){
			min = nums[i];
			idx = i;
	   }
	}
	return idx;
}
void swap(int nums[10], int i, int j)
{
	int temp;
	temp = nums[i];
	nums[i] = nums[j];
	nums[j] = temp;
}
void sort(int nums[10])
{
	int i, minIdx;
	for(i = 0; i < 10; i++){
		minIdx = findMinIndex(nums, i, 10);
		if(minIdx != i){
		 swap(nums, i, minIdx);
		}
	}
}
void main()
{
	int nums[10];
	clrscr();
	inputArray(nums);
	printf("\nBefore Sorting: \n");
	displayArray(nums);
	sort(nums);
	printf("\nAfter sorting: \n");
	displayArray(nums);
	getch();
}

