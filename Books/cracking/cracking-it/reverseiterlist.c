//Linked list reversal

//use of ** and to change the pointers in c language 

#include <stdio.h>
#include <stdlib.h>
//using recusion 
void iterrr(struct node **);


//structure 
struct node {
    int value;
    struct node * next;
};

//prototypes
void push(struct node **,int);
void printer(struct node *);

int main(){
    struct node * head = NULL;
    push(&head,50);
    push(&head,101);
    push(&head,102);
    push(&head,103);
    push(&head,104);
    push(&head,105);
    printer(head);
    iterrr(&head);
    printer(head);
    return 1;
}


//Push 
void push(struct node **head,int val){
    //doing a typecast is always safer
    struct node * temp = (struct node *)(malloc(sizeof(struct node)));
    temp->value = val;
    temp->next = (*head);
    //change head 
    //pushing each element to the start
    /**
     * remember to put a braces around the * casted stuff
     */
    (*head) = temp;
}

//list printer 
void printer(struct node * temp){
    
    while(temp != NULL)
    {
        printf("%d\t",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

/**
 * Recursive sort 
 * Idea - Implemetation similar to string reversal 
 * reverse(abcde) = reverse(bcde).a
 */

void iterrr(struct node **head){
    
    //empty list 
    if((*head) == NULL)
        return;
    
    struct node * first;
    struct node * second;
    first = *head;

    while(first->next != NULL)
    { 
    second = first->next;
    third = second->next;
    if(first == *head)
        first->next = NULL;
    second->next = first;
    first = third;
    
}





