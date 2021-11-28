#include <iostream>
using namespace std;
int binarysearch(int arr[] , int start, int r , int x ){
    if(r>=1){
        int mid = start + (r-1)/2;

        if(arr[mid]==x)
            return mid;

        if(arr[mid] > x)
            return binarysearch(arr , 1 , mid-1 , x);

        // if(arr[mid]>x)
        //     return binarysearch(arr,mid+1,r,x);

        return binarysearch(arr , mid+1 , r , x);            
    }
    return -1;
}

int main(){
    int arr[]={1,12,31,52,65,79,80,99,103};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 99;

    int result= binarysearch(arr , 0 , n-1 , x);
    (result==-1) ? cout<<"element is not present": cout<<"element is present at "<<result;
    return 0;
}