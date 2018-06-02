#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[40], aux[40];

    cin.getline(s, 40);

    for(int i=0; i<strlen(s); i++){
        strcpy(aux, s);
        strcpy(aux+i, aux+i+1);
        cout<<aux<<"\n";
    }

    return 0;
}