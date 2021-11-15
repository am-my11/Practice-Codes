#include <iostream>
using namespace std;

int main(){
    int num=0,i=0;
    int n =0;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(i=2;i<n;i++){
        num=a+b;
        cout<<num<<" ";
        a=b;
        b=num;
        
    }
    
    return 0;
}