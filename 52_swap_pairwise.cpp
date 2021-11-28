#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int temp=0;
    int n= sizeof(arr)/sizeof(arr[0]);

    if(n%2==0){
        for(int i=0 ;i<n ;i+=2){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
    }
    else{
        for(int i=0 ;i<n-1 ;i+=2){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

        }
    }  

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}