#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[40];
    bool exista=false;

    cin.getline(s, 40);

    for(int i=0; i<strlen(s); i++)
        if(strchr("aeiou", s[i])){
            exista=true;
            cout<<s[i]<<" ";
        }

    if(!exista) cout<<"fara vocale";

    return 0;
}