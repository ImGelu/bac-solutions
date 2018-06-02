#include <iostream>
#include <string.h>

using namespace std;

int fr[100];

int main(){

    char s[255];

    cin.getline(s, 255);

    for(int i=0; i<strlen(s); i++)
        if(fr[s[i]]==0 && islower(s[i])){
            fr[s[i]]=1;
            cout<<s[i]<<" ";
        }

    return 0;
}