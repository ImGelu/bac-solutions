#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[100], vocale[]="aeiou", aux[100];
    bool ok=false;

    cin>>s;

    for(int j=0; j<=4; j++){
        ok=false;
        strcpy(aux, s);
        for(int i=0; i<strlen(s); i++)
            if(s[i]==vocale[j]){
                ok=true;
                strcpy(aux+i, aux+i+1);
            }

        if(ok) cout<<aux<<"\n";
    }

    return 0;
}