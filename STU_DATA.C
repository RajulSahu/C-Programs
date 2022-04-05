#include<stdio.h>
#include<conio.h>
#include<process.h>

typedef struct student_data
{

	int rollNo;
	char name[50];

}student;

void inputData(student [5]);
void displayData(student [5]);

void main()
{
 char choice;
 student allStudents[5];
 FILE *fp1;
 clrscr();
 fp1 = fopen("database.txt", "rb");
 printf("Reading data from database...........");
 if(fp1 == NULL){
	printf("\nThe database file does not contain any data or does not exists...");
	printf("\nDo you want to enter the data ? (Type y Yes for n for No): ");
	scanf("%c", &choice);
	if(choice == 'y'){
		printf("\nEnter the data...\n");
		inputData(allStudents);
		printf("\nData Input successfully...\n");
		printf("Storing this data inside the file.....\n");
		fp1 = fopen("database.txt", "wb");
		fwrite(allStudents, sizeof(student),5,fp1);
		printf("Data stored successfully");
	}
	else{
		exit(0);
	}
 }
 else{
 printf("\nReading data from database file....\n");
 fread(allStudents,sizeof(student),5,fp1);
 displayData(allStudents);
 }
 getch();
}
void inputData(student s[5])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\nEnter Student %d Data\n", i+1);
		printf("\nEnter Roll No: ");
		scanf("%d", &s[i].rollNo);
		fflush(stdin);
		printf("\nEnter Name: ");
		gets(s[i].name);
	}
}
void displayData(student s[5])
{
	int i;
	printf("\nStudent's Data\n");
	printf("\nRoll No    ||     Name \n");
	for (i = 0; i < 5; i++)
	{
		printf("  %d        ||   ", s[i].rollNo);
		printf(" %s \n", s[i].name);
	}
}