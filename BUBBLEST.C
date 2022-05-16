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
void swap(int nums[10], int i, int j)
{
	int temp;
	temp = nums[i];
	nums[i] = nums[j];
	nums[j] = temp;
}
void sort(int nums[10]){
	int i, j, swapped;
	for(i = 0; i < 10; i++){
		swapped = 0;
		for(j = 0; j < 9-i; j++){
			if(nums[j] > nums[j+1]){
				swapped = 1;
				swap(nums, j, j+1);
			}
		}
		if(!swapped) break;
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