#include <iostream>
#include <string.h>

using namespace std;

int fr[100];

int main(){

    char s[50], litMaxim='-';
    int maxim=-1;

    cin.getline(s, 50);

    for(int i=0; i<strlen(s); i++)
        if(islower(s[i])) fr[s[i]]++;

    for(int i='a'; i<='z'; i++)
        if(fr[i]>maxim){
            maxim=fr[i];
            litMaxim=(char)i;
        }

    if(litMaxim!='-') cout<<litMaxim;
    else cout<<"nu";

    return 0;
}