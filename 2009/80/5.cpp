#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[20];
    int iVoc, iCons;

    cin>>s;

    for(int i=0; i<strlen(s); i++)
        if(!strchr("aeiouAEIOU", s[i])){iCons=i; break;}

    for(int i=strlen(s)-1; i>=0; i--)
        if(strchr("aeiouAEIOU", s[i])){iVoc=i; break;}

    swap(s[iVoc], s[iCons]);

    cout<<s;

    return 0;
}