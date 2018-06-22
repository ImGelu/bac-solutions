#include <iostream>
#include <string.h>

using namespace std;

int fr1[100], fr2[100];

int main()
{
    bool ok=1;
    char s1[100], s2[100];

    cin.getline(s1, 100);
    cin.getline(s2, 100);

    for(int i=0; i<strlen(s1); i++) fr1[s1[i]]++;
    for(int i=0; i<strlen(s2); i++) fr2[s2[i]]++;

    for(int i='a'; i<='z'; i++)
        if(fr1[i]!=fr2[i]) ok=0;

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
