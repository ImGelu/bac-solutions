#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i=0;
    bool existaVocale=0;
    char s[100];

    cin.getline(s, 100);

    for(int i=0; i<strlen(s); i++)
        if(strchr("aeiou", s[i])){existaVocale=1; break;}

    if(existaVocale){
        while(i<strlen(s)){
            if(!strchr("aeioum", s[i])) strcpy(s+i, s+i+1);
            else i++;
        }

        cout<<s;
    }
    else cout<<"Nu exista";

    return 0;
}
