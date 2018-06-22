#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], *cuvant;
    int mij;

    cin.getline(s, 100);

    cuvant=strtok(s, " ");

    while(cuvant!=NULL){
        if(strlen(cuvant)%2!=0 && strlen(cuvant)>3){
            mij=strlen(cuvant)/2;

            strcpy(cuvant+mij, cuvant+mij+1);
        }
        cout<<cuvant<<" ";
        cuvant=strtok(NULL, " ");
    }

    return 0;
}
