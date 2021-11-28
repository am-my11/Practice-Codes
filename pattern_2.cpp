#include <iostream>
using namespace std;
int main(){
    int x=0;
    int i=0,j=0;
    cin>>x;
    int k=x;
    for(i=0;i<x;i++){

        for(j=k;j>0;j--){
            cout<<"* ";
            
        }
        k--;
        cout<<endl;
    }
    
    return 0;
}