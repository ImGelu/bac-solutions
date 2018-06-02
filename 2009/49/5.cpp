#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[20];

    cin>>s;

    for(int i=0; i<strlen(s); i++)
        if(!strchr("aeiou", s[i])) strcpy(s+i, s+i+1);

    cout<<s;

    return 0;
}