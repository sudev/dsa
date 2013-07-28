/**
https://www.hackerrank.com/challenges/pairs

Idea : Sort the array and check for the difference 
**/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,dif;
    cin>>t;
    cin>>dif;
    int ar[t];
    for(int k=0; k < t; k++)
        cin>>ar[k];
    //array sorted standard library can be used 
    //sorts from start of ar to ar+t pointer
    
    std::sort(ar,ar+t);
    
    //for(int k=0; k < t; k++)
      //  cout<<ar[k]<<"\t";
    int count =0 ;
    for(int j=0; j< t;j++)
    {
        //forwards search 
        int index = j+1;
        for(index;index<t;index++)
        {
            if(std::abs(ar[j] - ar[index]) == dif)
            {
            count++;
            break;
            }
            if (std::abs(ar[j] - ar[index]) > dif)
            {
            break;
            }
        }   
      
           
    }
    
    cout<<count;
    return 0;
}
 
