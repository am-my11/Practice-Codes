#include <iostream>
using namespace std;

int main(){
    int num=0;
    int i=0,j=0;
    int var=1;
    cin>>num;
    for(i=0;i<num;i++){
        for(j=0;j<=i;j++){
            cout<<i+1<<" " ;
        }
        cout<<endl;
        var++;
    }    
    return 0;
}