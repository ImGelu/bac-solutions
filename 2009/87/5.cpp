#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[100];
    int k=0;

    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++)
        if(islower(s[i])) s[i]=toupper(s[i]);
        else if(isupper(s[i])) s[i]=tolower(s[i]);
        else k++;

    cout<<s<<"\n"<<k;

    return 0;
}