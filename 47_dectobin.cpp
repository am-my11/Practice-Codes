#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num=0;
    cin>>num;
    int rem=0,i=0;
    int bin=0;
    while(num!=0){
        rem=num%2;
        bin+=rem*pow(10,i);
        num=num/2;
        i++;
    }
    cout<<bin;
    
    return 0;
}