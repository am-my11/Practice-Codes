#include <iostream>
using namespace std;

int main(){
    int n1 , n2 ;
    cin>>n1>>n2;
    int min,i;
    min=(n1>n2)?n2:n1;
    // cout<<min;
    for( i = min ; i>0 ; i-- ){
        if(n1%i==0 && n2%i==0){
            break;
        }
    }
    cout<<"the hcf of "<<n1<<" and "<<n2<<" is "<<i;

    
    return 0;
}