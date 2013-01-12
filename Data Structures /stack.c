#include <stdio.h>
//
void push();
void pop();
int arra[100],trac=0;
void show();

void main()
{
  int choice =1;
  while(choice)
  {
    printf("\n-----------------------------------\n\nEnter your choice \n1.Show\n2.POP\n3.Push\n");
    scanf("%d",&choice);
    switch(choice)
     {
     case 1:
     show();
     break;
     case 2:
     pop();
     break;
     case 3:
     push();
     break;
     default:
     break; 
    }
}
}
//push fuction 
void push()
{	
  int element;
	printf("Enter the element:\t");
	scanf("%d",&element);
	arra[++trac]=element;
  printf("Element added %d\n",element);
}
//pop fuction 
void pop()
{
  if(trac==0)
  printf("Empty stack \n");    
  else
  {
  printf("poping element %d dishum \n",arra[trac]);
  trac--;
  }
}
//checking array
void show()
{
  int i;
  if(trac>0)
    { 
    printf("Elements = %d\t",trac);
    for(i=trac;i>0;i--)
      printf("%d\t",arra[i]); 
    }
  else
    {
    printf("empty stack add something\n");
    }
}

