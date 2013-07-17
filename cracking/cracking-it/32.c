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
int minimum(struct node *);
node * treemirror(node *);

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
    printf("\n1.Insert\n3.Delete\n4.Search\n5.Preorder\n6.Maxdepth\n7.Minmum\n0.Exit\n");
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
                break;
            }
        case 4:
            {
                printf("\nElement to search\n");
                int s;
                scanf("%d",&s);
                printf("\n%d\t%s\n",s,(contains(s)) ? "true" : "false" );
                break;
            }
        case 6:
        
                printf("\nMaxdepth is %d\n",maxdepth(root));
                break;
        case 7:
                printf("Mininmum Value is %d",minimum(root));
                break;
        case 8:
                treemirror(root);
                break;

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
            t = t->r;
        }
        else
        {
            t = t->l;
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
            temp = temp->r;
        }
        else
        {
            temp = temp->l;
        }
    }
    //add the element now 

    if(parent->value > value){
        temp = malloc(sizeof(node));
        temp->value = value;
        parent->l = temp;
        temp->l = NULL;
        temp->r = NULL;
        printf("\nAdded succesfully to parent %d\n",parent->value);
        return 1;
    }
    else
    {
        temp = malloc(sizeof(node));
        parent->r = temp;
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
int maxdepth(struct node * cur ){
if(cur == NULL )
    {
    return 0;
    }
int l = maxdepth(cur->l);
int r = maxdepth(cur->r);
if( l > r)
    {
    return (l + 1);
    }
else 
    {
    return (r + 1);
    }
}

int minimum(struct node * cur){
    
    while(cur->l != NULL)
    {
        cur = cur->l;
    }
    return cur->value;
}

//Tree mirroring suppose you want to mirror the tree
//Normally used in binary tree 

node * treemirror(node * cur){
    if(cur == NULL)
        return NULL;
    struct node * nright, * nleft;
    if (cur->l != NULL)
        nleft = treemirror(cur->l);
    if(cur->r != NULL)
        nright = treemirror(cur->r);

    cur->l = nright;
    cur->r = nleft;
    return(cur);
}

    
