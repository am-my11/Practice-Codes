#include <iostream>
using namespace std;

int main(){
    int num=0;
    int i=0,j=0,t=0;
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0,t=1;j<=i;j++){
        cout<<t<<" ";
        t++;    
        }    
        cout<<endl;
    }    
    return 0;
}