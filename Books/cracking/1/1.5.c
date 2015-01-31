#include <stdio.h>
#include <string.h>

int main()
{
    char st[256],k,temp,re[256];
    int i=1,count =1,p=0;
    fgets(st,256,stdin);
    k = st[0];
    while(st[i] != '\n')
    {
        
         while(k == st[i])
        {
            count++;
            i++;
        }
        re[p] = k;
        re[++p] = count+'0';
        k = st[i];
        count =0;
        ++p;
    }
    re[p] = '\0';
    st[i] = '\0';
    if(strlen(re) < strlen(st))
    printf("%s",re);
    else
    printf("%s",st);
    return 0;
}




