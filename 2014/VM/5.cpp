#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    int i=0;

    cin.getline(s, 100);

    while(i<strlen(s)-1)
        if(strchr("aeiou", s[i]) && strchr("aeiou", s[i+1])) strcpy(s+i, s+i+1);
        else i++;

    cout<<s;

    return 0;
}
