#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], *cuvant;

    cin.getline(s, 100);

    cuvant=strtok(s, " ");

    while(cuvant!=NULL){
        if(strlen(cuvant)%2==0) strcpy(cuvant, "#");
        cout<<cuvant<<" ";
        cuvant=strtok(NULL, " ");
    }

    return 0;
}
