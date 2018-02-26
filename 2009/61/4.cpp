#include <iostream>

using namespace std;

int main(){

    for(int i='a'; i<='z'; i++)
        for(int j='a'; j<='z'; j++)
            if(i!=j) cout<<(char)i<<(char)j<<endl;

    return 0;
}