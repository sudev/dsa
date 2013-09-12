#include <stdio.h>

int main(){
    char w[100];
    char r[100];
    printf("Enter a string\n");
    scanf("%s",w);
    //getline(stdin,w);
    int i=0;
    while(w[++i] != '\0');
    
    int t=i;
    for(i=0; i < t; i++)
        r[i] = w[(t-1-i)];
    printf("%s",r);
        
    printf("%d",i);
    
    return 0;
}

    
