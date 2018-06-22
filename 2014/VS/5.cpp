#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100], a[100];

    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++)
        if(strchr("aeiou", s[i])){
            strcpy(a, s+i+1);
            s[i+1]=s[i];
            strcpy(s+i+2, a);

            i++;
        }

    cout<<s;

    return 0;
}
