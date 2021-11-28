#include <iostream>
using namespace std;

int main(){
    int bnum=0;
    cin>>bnum;
    int rem=0,count=0;

    while(bnum!=0){
        rem=bnum%10;
        if(rem==1){
            count++;
        }
        bnum=bnum/10;

    } 
    cout<<count;   
    return 0;
}