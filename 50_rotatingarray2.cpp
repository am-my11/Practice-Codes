#include <iostream>
using namespace std;
// rotating rightwise
// for leftwise k=n-d (d= leftwise rotation)
void RotateArray(int arr[] ,int a ,int b){
    b=(a+b);
    int temp=0;
    for(int i = a ; i<b/2 ; i++ ){
        temp= arr[i];
        arr[i]=arr[b-1-i];
        arr[b-1-i]=temp;
    }
}
void printarray(int arr[] , int a , int b){
    for(int i=0 ; i<b ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]= { 1,2,3,4,5,6,7,8,9};
    int k =2%9;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printarray(arr,0,n);
    RotateArray(arr,0,n-k);
    printarray(arr,0,n);
    RotateArray(arr,n-k,n);
    printarray(arr,0,n);
    RotateArray(arr,0,n);
    printarray(arr,0,n);


    return 0;
}
