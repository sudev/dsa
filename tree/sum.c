/**
Given a binary tree and a number, return true if the tree has a 
 root-to-leaf path such that adding up all the values along the path
 equals the given number. Return false if no such path can be found.

For example 
For example, in the above tree root to leaf paths exist with following sums.

21 –> 10 – 8 – 3
23 –> 10 – 8 – 5
14 –> 10 – 2 – 2

So the returned value should be true only for numbers 21, 23 and 14. For any other number, returned value should be false.

Algorithm:
Recursively check if left or right child has path sum equal to ( number – value at current node)
**/

#include <stdio.h>
#include <stdlib.h>

struct node * addnode(int);

//btree creation 
struct node {
  int value;
  struct node * left;
  struct node * right;
};



struct node * addnode(int val){
  struct node * temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->value = val;
  temp->left = NULL;
  temp->right = NULL;
  return (temp);
}

int main(){
  //using the function to return a pointer to the 
  //node struct node * datatype
  struct node * root = addnode(10);
  root->left = addnode(8);
  root->right = addnode(2);
  root->left->left  = addnode(3);
  root->left->right = addnode(5);
  root->right->left = addnode(2);
  
  return;
}





