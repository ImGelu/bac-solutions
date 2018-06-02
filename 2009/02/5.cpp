#include <iostream>
#include <string.h>

using namespace std;

int main(){

    bool vid=1;
    char c[20];

    cin.getline(c, 20);

    for(int i=0; i<strlen(c); i++)
        if(isupper(c[i])){
            vid=0;
            cout<<c[i];
        }

    if(vid) cout<<"CUVANT VID";

    return 0;
}