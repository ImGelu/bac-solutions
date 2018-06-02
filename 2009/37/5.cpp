#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[255], *c;

    cin.getline(s, 255);

    s[0]=toupper(s[0]);
    s[strlen(s)-1]=toupper(s[strlen(s)-1]);

    for(int i=1; i<strlen(s)-1; i++)
        if(s[i-1]==' ' || s[i+1]==' ') s[i]=toupper(s[i]);

    cout<<s;

    return 0;
}