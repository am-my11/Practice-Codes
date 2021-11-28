#include <iostream>
using namespace std;

int main(){
    int num=0;
    int n=0;
    cout<<"enter the no"<<endl;
    cin>>num;
    cout<<"enter base"<<endl;
    cin>>n;
    
    while (num > n){
        num=num/n;
    }
    if(num==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    
    return 0;
}