#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char s[200], *cuvant;
    int cuvinte=0, k=0;

    cin.getline(s, 200);

    cuvant = strtok(s, " ");

    while(cuvant!=NULL){
        cuvinte++;
        if(strchr("aeiou", cuvant[0])) k++;
        cuvant = strtok(NULL, " ");
    }

    cout<<cuvinte<<" "<<k;

    return 0;
}