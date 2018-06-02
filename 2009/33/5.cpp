#include <iostream>
#include <string.h>

using namespace std;

char fr[1000];

int main(){

    char s[255], *c;
    int k=0;

    cin.getline(s, 255);

    c=strtok(s, " ");

    while(c!=NULL){
        k++;

        for(int i=0; i<strlen(c); i++)
            if(!strchr("AEIOU ", c[i])) fr[c[i]]++;

        c=strtok(NULL, " ");
    }

    cout<<k<<"\n";

    for(int i='A'; i<='Z'; i++)
        if(fr[i]) cout<<(char)i<<" ";

    return 0;
}