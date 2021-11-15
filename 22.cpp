#include <iostream>
using namespace std;
bool decending(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]<arr[i+1])
            return false;
    }return true;    
}

int main(){
    int arr[]={2500,800,94,11,1};
    int count= sizeof(arr)/sizeof(arr[0]);
    cout<<decending(arr,count);

    return 0;
}