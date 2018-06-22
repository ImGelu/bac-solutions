#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], *cuvant;

    cin.getline(s, 100);

    cuvant=strtok(s, " ");

    while(cuvant!=NULL){
        if(strstr(cuvant, "DO") || strstr(cuvant, "RE") || strstr(cuvant, "MI") || strstr(cuvant, "FA") || strstr(cuvant, "SOL") || strstr(cuvant, "LA") || strstr(cuvant, "SI")) cout<<cuvant<<"\n";
        cuvant=strtok(NULL, " ");
    }

    return 0;
}
