#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char c[100];
    int i=0;

    cin.getline(c, 100);

    while(i<strlen(c)){
        if(!isdigit(c[i])) strcpy(c+i, c+i+1);
        else i++;
    }

    cout<<c;

    return 0;
}