#include <iostream>
using namespace std;
int main(){
    int num=0;
    int i=0,j=0,k=0;
    cin>>num;
    for(i=0;i<num;i++){
        for(j=k;j<num;j++){
            cout<<" ";
        }
        for(j=0;j<=k;j++){
            cout<<"* ";
        }
        cout<<endl;
        k++;
    }
    
    for(i=0;i<num-1;i++){
        for(j=num;j>=k-1;j--){
            cout<<" ";
        }
        for(j=k-1;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
        k--;
    }
    return 0;
}