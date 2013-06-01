#include <stdio.h>
#include <string.h>
int brute(char *,char *);
int main(){
    char str[256],pat[256];
    printf("Enter the string : \n");
    fgets(str,256,stdin);
    printf("\nEnter the pattern that you want to match:\n");
    fgets(pat,256,stdin);
    if(brute(str,pat)> 0)
    printf("Is a substring");
    else
    printf("Not a substring%d",brute(str,pat));
    return 0;
}

int brute(char * str,char * pat){
    int i;
    for(i=0; i <= (strlen(str) - strlen(pat)); i++)
    {
        int j = 0;
        while( (j  < (strlen(pat) -1)) &&( pat[j] == str[j+i]))
        {   
            printf("\nmathcing at %d\t%d times\n",i,j);
            if(j == (strlen(pat)-2))
                return (i+1);
            j++;
        }
    }
    return 0;
}



