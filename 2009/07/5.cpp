#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[255];

    cin.getline(s, 255);

    for(int i=strlen(s)-1; i>=0; i--)
        if(!strchr("aeiou", s[i]) && isalpha(s[i])){
            cout<<s[i];
            break;
        }

    return 0;
}