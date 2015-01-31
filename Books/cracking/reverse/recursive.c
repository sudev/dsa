#include <stdio.h>

//structure
struct node {
    int value;
    struct node * next;
};

struct node * head;

//prototypes

int push(int);

int rever();


int main(int argc, char * argv[]){

    printf("%d\n",argc);
    int k;
    k = argc;
    int a[10],i=1;
    while(k > i)
    {
        printf("%d\n",atoi(argv[i]) );
        i++;
    }
    return 0;
}

