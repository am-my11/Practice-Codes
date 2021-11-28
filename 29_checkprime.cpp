#include <iostream>
using namespace std;
bool checkprime(int num){
    for(int j=2;j*j<=num;j++){
        if(num%j==0){
            return false;
        }
           
    }
    return true; 
}

int main(){
    int i=0;
    int num=0;
    cin>>num;
    cout<<checkprime(num);
       
    return 0;
}