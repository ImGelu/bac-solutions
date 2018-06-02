#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[200], *cuvant;
    int k=0;

    cin.getline(s, 200);

    cuvant = strtok(s, " ");

    while(cuvant!=NULL){
        if(strchr("aeiouAEIOU", cuvant[0]) && strchr("aeiouAEIOU", cuvant[strlen(cuvant)-1])) k++;
        cuvant = strtok(NULL, " ");
    }

    cout<<k;

    return 0;
}