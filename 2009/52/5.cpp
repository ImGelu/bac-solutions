#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char c[100];

    cin.getline(c, 100);

    cout<<c[0];

    for(int i=1; i<strlen(c); i++)
        if(c[i]==' ') cout<<c[i+1];

    return 0;
}