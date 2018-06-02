#include <iostream>
#include <string.h>

using namespace std;

int fr[10];

int main(){

    char s[50];
    int maxim=-1, cifMaxim=-1;

    cin.getline(s, 50);

    for(int i=0; i<strlen(s); i++)
        if(isdigit(s[i])) fr[s[i]]++;

    for(int i=0; i<=9; i++)
        if(fr[i]>maxim){
            maxim=fr[i];
            cifMaxim=i;
        }

    if(cifMaxim!=-1) cout<<cifMaxim;
    else cout<<"NU";

    return 0;
}