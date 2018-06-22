#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    bool ok=1, existaConsoane=0;

    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++){
        if(s[i]>'b' && s[i]<'z' && !strchr("aeiou", s[i])) existaConsoane=1;
        if(strchr("aeou", s[i])) ok=0;
    }

    if(!ok || !existaConsoane) cout<<"NU";
    else cout<<"DA";

    return 0;
}
