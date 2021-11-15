#include <iostream>
using namespace std;
bool ascending(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1])
            return false;
    }return true;    
}

int main(){
    int arr[]={25,80,94,110,116};
    int count= sizeof(arr)/sizeof(arr[0]);
    cout<<ascending(arr,count);

    return 0;
}