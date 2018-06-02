#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char a[100], b[100], k=1, sir=0;

    cin>>a>>b;

    if(strlen(a)<strlen(b)) swap(a, b);

    for(int i=strlen(a)-1; i>=0; i--){
        if(a[i]==b[strlen(b)-k]){
            k++;
            sir++;
        }
        else break;
    }

    if(!sir) cout<<"NU EXISTA";
    else for(int i=k+1; i<strlen(a); i++) cout<<a[i];

    return 0;
}