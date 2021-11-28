#include <iostream>
using namespace std;
int main(){
    int prod=1;
    int arr[]={1,2,3,4,5,6};

    for(int i=0;i<6;i++){
        prod*=arr[i];
    }
    cout<<prod;

    return 0;
}