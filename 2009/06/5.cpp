#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[255];
    const char *sep=" ", *cuvant;

    cin.getline(s, 255);

    s[0]=toupper(s[0]);

    for(int i=0; i<strlen(s); i++){
        if(s[i-1]==' ') s[i]=toupper(s[i]);
        cout<<s[i];
    }

    return 0;
}