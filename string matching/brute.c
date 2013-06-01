#include <stdio.h>
#include <string.h>
int brute(char *,char *);
int main(){
    char str[256],pat[256];
    printf("Enter the string : \n");
    fgets(str,256,stdin);
    printf("\nEnter the pattern that you want to match:\n");
    fgets(pat,256,stdin);
//    newline(str);
    if(brute(str,pat))
    printf("Is a substring");
    else
    printf("Not a substring");
    return 0;
}

int brute(char * str,char * pat){
    int i;
    printf("len str %d \t pat %d",strlen(str),strlen(pat));
    for(i=0; i <= (strlen(str) - strlen(pat)); i++)
    {
        int j = 0;
        while( j  < (strlen(pat) -2) && pat[j] == str[j+i])
        {    
            if(j == strlen(pat))
                return i;
            j++;
        }
    }
    return 0;
}



