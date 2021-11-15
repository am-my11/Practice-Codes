#include <iostream>
using namespace std;
int main(){
    int num=0;
    int i=0,j=0;
    int out=0;

    cin>>num;

    for(i=0 ; i<num ; i++){
        for(j=i ; j<num ; j++){
            cout<<" ";
        }
        for(j=0 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}    