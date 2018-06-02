#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[20];

    cin>>s;

    cout<<s<<"\n";

    while(strlen(s)!=1){
        strcpy(s+0, s+1);
        strcpy(s+strlen(s)-1, s+strlen(s));
        cout<<s<<"\n";
    }


    return 0;
}