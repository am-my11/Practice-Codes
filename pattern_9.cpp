#include <iostream>
using namespace std;
int main(){
    int num=0;
    int i=0,j=0;
    int out=0;

    cin>>num;
    out=num;
    for(i=0 ; i<num ; i++){
        for(j=i ; j>0; j--){
            cout<<" ";
        }
        for(j=out ; j>0 ; j--){
            cout<<"*";
        }
        cout<<endl;
        out--;
    } 
    return 0;
}    