#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[70], *cuvant;
    bool exista=0;
    int k=0;

    cin.getline(s, 70);

    cuvant = strtok(s, " ");

    while(cuvant!=NULL){
    exista=0;

    for(int i=0; i<strlen(cuvant); i++)
        if(cuvant[i]=='a') exista=1;

    if(exista) k++;

    cuvant=strtok(NULL, " ");

    }

    cout<<k;

    return 0;
}
