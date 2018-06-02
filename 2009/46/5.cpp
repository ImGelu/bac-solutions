#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[100];

    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++)
        if(strchr("aeiou", s[i])) s[i]=(char)((int)s[i]+1);

    cout<<s;

    return 0;
}