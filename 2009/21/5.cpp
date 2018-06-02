#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[250];

    cin.getline(s, 250);

    for(int i=1; i<strlen(s); i++)
        if(s[i]==s[i-1] && s[i]!='*') cout<<s[i]<<s[i]<<"\n";

    return 0;
}