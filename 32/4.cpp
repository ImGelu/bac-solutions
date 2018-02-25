#include <iostream>
#include <limits.h>

using namespace std;

int main(){

    int x, maxim1=INT_MIN, maxim2=INT_MIN;

    while(cin>>x){
        if(x%2==0){
            if(x>maxim1) maxim1=x;
            if(x>maxim2){
                maxim1=maxim2;
                maxim2=x;
            }
        }
    }

    cout<<maxim1<<" "<<maxim2;

    return 0;
}