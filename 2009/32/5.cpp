#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char c1, c2, s[250];

    cin.getline(s, 250);
    cin>>c1>>c2;

    cout<<s<<"\n";

    for(int i=0; i<strlen(s); i++)
        if(s[i]==c1) s[i]=c2;
        else if(s[i]==c2) s[i]=c1;

    cout<<s;

    return 0;
}