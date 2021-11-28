#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cin>>num1>>num2;
    int max,i;
    if(num1>num2){
        max= num1;
    }
    else{
        max= num2;
    }
    // cout<<max<<endl;
    for(i=max ; i<=num1*num2 ; i+=max){
        if(i%num1==0 && i%num2==0){
            break;
        }

    }
    cout<<"lcm of "<<num1<<" and "<<num2<<" is "<<i;
    return 0;
}