/**
 * Reverse words in a given string
May 3, 2010
Example: Let the input string be “i like this program very much”. The function should change the string to “much very program this like i”

Algorithm:

1) Reverse the individual words, we get the below string.
 "i ekil siht margorp yrev hcum"
2) Reverse the whole string from start to end and you get the desired output.
 "much very program this like i"

 Copied from Geeks for geeks http://www.geeksforgeeks.org/reverse-words-in-a-given-string/
 **/

#include <stdio.h>
void reversewords(char *);
void reverse(char *, char *);
int main(){
    char str[] = "i like this programing very much";
    printf("%s\n",str);
    reversewords(str);
    printf("%s",str);
}

void reversewords(char * s)
{
    char *word_begin =NULL;
    //start of the word to reverse it 
    char *temp =s;
    //word boundary

    while( *temp)
    {
        if (( word_begin == NULL ) && (temp != ' '))
        {
            word_begin = temp;
        }
        if(word_begin && (( *(temp+1) == ' ') || (*(temp+1) == '\0'))) //wordbegin + NEXT char is either space or NULL
        {
            reverse(word_begin,temp);
        }
        temp++;
    }
    printf("%s\n",s);
//    printf("ASD");
    reverse(s,temp-1);
}

void reverse(char *begin,char *end){
    char temp;
    if(end > begin)
    {
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;  //swaped words using temp 
    }
}

