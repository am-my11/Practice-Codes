#include <iostream>
using namespace std;
int factorial(int x){
    int f=0;
    if(x==0 ||x==1){
        
        return 1;
    }
    else{
        f=x * factorial(x-1);
        return f;
    }

    
}
int main(){
    int x=0;
    cin>>x;
    int fact = factorial(x);
    cout<<fact;
}