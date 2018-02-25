#include <iostream>

using namespace std;

int main(){

    for(int i='A'; i<='Z'; i++)
        for(int j='A'; j<='Z'; j++)
            if(i!=j) cout<<(char)i<<(char)j<<endl;

    return 0;
}