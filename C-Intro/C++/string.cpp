#include <string>
#include <iostream>

#include <cctype>
//contains lots of string options like 
//isalpha isdidgit ispunct isalnum etc 
using namespace std;
int main()
{
    string s;
    //cin>>s; // this will only take input upto the space 
    //cout<<s;
    //cout<<endl<<s.length();
    char ss[256];
    cin.getline(ss, 256);
    cout<<ss;
//    cout<<endl<<ss.length();
}
