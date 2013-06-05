//stack using a linked list
// basic operations push pop 
#include <stdio.h>
#include <stdlib.h>
void push(int);
void pop();
void constructor();
void printer();
struct stak {
    int value;
    struct stak * next;
};

struct stak * tail;

int main(){
    int choice = 1;
    while(choice){
        printf("\n1.Constructor()\n2.Push\n3.Pop\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                {
                    constructor();
                    printer();
                    break;
                }

            case 2: 
                {
                    printf("\nEnter the value you want to push");
                    int val;
                    scanf("%d",&val);
                    push(val);
                    printer();
                    break;
                }

            case 3:
                    {
                        pop();
                        printer();
                        break;
                    }
            default:
                    printf("sorry I didnt code for anything of that sort");
        }
    }
return 0;
}

void constructor(){
    tail = malloc(sizeof(struct stak ));
    int val;
    printf("Enter your your value");
    scanf("%d",&val);
    tail->value = val;
}

void push(int val){
    struct stak * t;
    t = malloc(sizeof(struct stak));
    t->value = val;
    t->next = tail;
    tail = t;
}

void pop(){
struct stak * t;
t = tail;
tail = tail->next;
free(t);
}

void printer(){
    printf("\n Printing the stack \n--------\n");
    struct stak * t;
    t =tail;
    while(t){
        printf("|  %d\n-------\n",t->value);
        t = t->next;
    }
    printf("\n End of stack\n");

}




