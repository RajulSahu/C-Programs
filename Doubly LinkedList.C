#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *HEAD = NULL;
struct node *TAIL = NULL;

struct node* createNode(){
    struct node *n;
    n = (struct node *)(malloc(sizeof(struct node)));
    return n;
}

int choice(){
    int n;
    printf("\n1: Insert a node at begining.");
    printf("\n2: Delete a node from end");
    printf("\n3: View list.");
    printf("\n4: Insert a node before a particular node.");
    printf("\n5: Delete a node before a particular node.");
    printf("\n6: Display list in reverse order.");
    printf("\nEnter your choice: ");
    scanf("%d", &n);
    return n;
}

void insertAtBegining(){
    struct node *temp;
    temp = createNode();
    printf("Enter the data: ");
    scanf("%d", &temp->data)
    temp->next = NULL;
    temp->prev = NULL;
    if(HEAD == NULL){
        // List is empty.
        HEAD = temp;
        TAIL = HEAD;
    }else{
        // List is not empty.
        
    }
}


void main(){
    int ch = choice();
    while(1){
        ch = choice();
        switch(ch){
        case 1:
            insertAtBegining();
            break;
        case 2:
            deleteFromEnd();
            break;
        case 3:
            displayList();
            break;
        case 4:
            insertBeforeSpecificNode();
            break;
        case 5:
            deleteBeforeSpecificNode();
            break;
        case 6:
            displayInReverseOrder();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Wrong Choice!");
        }
    }   
}














