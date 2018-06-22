#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    string a;

    cin.getline(s, 100);

    a=s[0];

    for(int i=0; i<strlen(s); i++)
        if(isupper(s[i]) && s[i-1]==' ') a=a+s[i];

    cout<<a;
    return 0;
}
