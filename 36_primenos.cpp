#include <iostream>
using namespace std;

int main(){
    int i=0;
    int num=0;
    int a=0,b=0;
    cin>>a>>b;
    for(num=a;num<=b;num++){
        for ( i = 2; i <=num ;i++)
        {   
            if(num%i==0){
                break;
            }
        
        }
        if(num==i) {
            cout<<num<<" ";
        
        }
}    
    return 0;
}