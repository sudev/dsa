//Implementation of a binary tree 
//using C 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int value;
    struct node * l; //saves the lesser elements 
    struct node * r; //saves the greater elements 
}
node; // now you can refer the  "struct node" as "node" ( typedef )

int add(int);
bool contains(int );
void construct();
void preorder( node * );
node * root = NULL;

int main(){ 
    /** you can do anything with arguments like in here we have
    opted to make the arguments to const which wont allow the program to change the arguments
    after this
    **/
    //root = malloc(sizeof(node)); /**
    /**the reason why we use sizeof  Compatible with any architecture 
    , padding the compiler may use ( ? )               **/
    int choice=1;
    while(choice){
    printf("\n1.Insert\n3.Delete\n4.Search\n5.Preorder\n0.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            {
                int ins;
                printf("\nEnter a value you want to insert\n");
                scanf("%d",&ins);
                add(ins);
                break;
            }
        case 5:
            {
                preorder(root);
            }
        case 4:
            {
                printf("\nElement to search\n");
                int s;
                scanf("%d",&s);
                printf("\n%d\t%s\n",s,(contains(s)) ? "true" : "false" );
                break;
            }
        default:
            {
                break;
            }
        }
    }

    return 0;
}

// include <stdbool> for bool type 
bool contains(int value){
    node * t = root;
    while(t != NULL)
    {
        if( t->value == value){
            return true;
        }
        else if(t->value < value){
            t = t->l;
        }
        else
        {
            t = t->r;
        }
    }
    return false;
}


int add(int value){
    node * temp;
    temp = root;
    if ( root == NULL)
    {
        printf("\nInside root\n");
        root = malloc(sizeof(node));
        root->value = value;
        root->l = NULL;
        root->r = NULL;
        return 1;
    }
    
    node * parent = NULL;
    while(temp != NULL){
        parent= temp;
       // printf("\nparent  = %d\n",parent->value);
        if(value > temp->value)
        {
            temp = temp->l;
        }
        else
        {
            temp = temp->r;
        }
    }
    //add the element now 

    if(parent->value > value){
        temp = malloc(sizeof(node));
        temp->value = value;
        parent->r = temp;
        temp->l = NULL;
        temp->r = NULL;
        printf("\nAdded succesfully to parent %d\n",parent->value);
        return 1;
    }
    else
    {
        temp = malloc(sizeof(node));
        parent->l = temp;
        temp->value = value;
        temp->l = NULL;
        temp->r = NULL;
        printf("\nAdded succesfully to parent %d\n",parent->value);
        return 1;
    }
    return 0;
}

//Implementing Preorder Sample 

void preorder(node * cur)
{
    if(cur)
    {
        printf("%d\t",cur->value);
        preorder(cur->l);
        preorder(cur->r);
    }
return;
}

/** Need to implement stack to make this 
 * work properly
void iterpreorder(node *)
{

    cur = root;
    // struct CreateStack * s;
    //stack is empty  
    while(1)
    {
        while(cur)
        {
            printf("%d\t",cur->value);
            push(cur);
            //if left is not empty go to left
            cur = cur->l;
        }
        if( emptystack() )
            break;
        cur = pop(s);
        cur = cur->right;
    }
    deleteStack();
}
*/



