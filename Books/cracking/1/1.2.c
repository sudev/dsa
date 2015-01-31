 #include <stdio.h>

void reverse(char * str)  { 
    char * end =  str; 
    char tmp;
    if (str) { 
        while(*end) {
            end++; 
        }
        end--;
        while( str < end ) 
        {
            tmp = *str;
            printf("Charavter %c\n",tmp);
            *str++ = *end;
            *end-- = tmp;
        }
        printf("%s", str);
    } else { 
        printf("No string");
    }
}

int main() { 
    char str[100] = "Hrllo" ; 
    reverse(str);
}

