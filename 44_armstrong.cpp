#include <iostream>
using namespace std;
int main(){
    int num=0 , rem=0 , sum=0;
    cin>>num;
    int temp= num;

    while(temp!=0){
        rem=temp%10;
        sum += (rem*rem*rem);
        temp=temp/10; 
    }    
    
    if(sum==num){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}