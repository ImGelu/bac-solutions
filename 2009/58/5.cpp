#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char c[50];
    int mari=0, mici=0, alte=0;

    cin.getline(c, 50);

    for(int i=0; i<strlen(c); i++)
        if(islower(c[i])) mici++;
        else if(isupper(c[i])) mari++;
        else alte++;

    cout<<mare<<" "<<mici<<" "<<alte;

    return 0;
}