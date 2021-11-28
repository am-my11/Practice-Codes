#include <iostream>
using namespace std;

int main(){
    int base=0;
    int power=0;
    int result=1;
    cin>>base>>power;

    for(int i=1;i<=power;i++){
        result*=base;

    }    
    cout<<result;
    return 0;
}