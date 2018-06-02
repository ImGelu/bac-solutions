#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[50];

    cin>>s;

    for(int i=0; i<strlen(s); i++){
        for(int j=0; j<=i; j++)
            cout<<s[j];

        cout<<endl;
    }


    return 0;
}