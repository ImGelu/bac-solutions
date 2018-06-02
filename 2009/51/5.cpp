#include <iostream>
#include <string.h>

using namespace std;

int main(){

    bool ok=1;

    char c[30];

    cin.getline(c, 30);

    for(int i=0; i<strlen(c); i++)
        if(c[i]!=' ' && !isalpha(c[i])){ok=false; break;}

    if(ok) cout<<"DA";
    else cout<<"NU";


    return 0;
}