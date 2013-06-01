#include <stdio.h>
#include <stdlib.h>
void constructor();
void printer();
void adder();
struct node{
    int value;
    struct node * next;
};
struct node * root;
int main(){
    int choice=1;
    while(choice ){
        printf("Enter a Choice:\n1.Construct a Linked list\n2.Insert a element\n3.delete a element\n");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            constructor();
            break;
        case 2:
            adder();
            break;
        default:
            break;
        }
    }
    return 0;
}

void constructor(){
    int n;
    root = malloc(sizeof(struct node));
    root->next = NULL;
    printf("Enter the value for the root nodei\n");
    scanf("%d",&root->value);
    printer();
}
void printer(){
    struct node * temp;
    temp = root;
    printf("printing ..\n");
    while(temp)
    {
        printf("%d\t",temp->value);
        temp = temp->next;
    }
    printf("\n done printing\n");
}

void adder(){
    struct node * temp; 
    temp = root;
    int nelem,posi;
    printf("Give me a position (starting with one , and zero for root) ? \n");
    scanf("%d",&posi);
    //head case 
    if( posi == 0){
        struct node * temp2;
        temp2 = malloc(sizeof(struct node));
        scanf("%d",&temp2->value);
        temp2->next = temp;
        root = temp2; 
        printer();
        return;
    }
    posi--;
    while(posi > 0){
        temp = temp->next;
        if(!temp)
            printf("out of bound");
        --posi;
    }
    
    //in b/w
    if(temp->next){
        struct node * temp2;
        temp2 = malloc(sizeof(struct node)); 
        scanf("%d",&temp2->value);
        temp2->next = temp->next;
        temp->next =temp2;
    }
    else{
        struct node * temp2;
        temp2 = malloc(sizeof(struct node)); 
        scanf("%d",&temp2->value);
        temp->next = temp2;
        temp2->next = NULL;
    }

    printer();
}





    
