#include <iostream>
using namespace std;

int main(){
    int arr[]={6,4,1,5,2};
    int first_max, sec_max;
    int n= sizeof(arr)/sizeof(arr[0]);
    first_max=sec_max=INT_MIN;

    for(int i=0 ; i<n ; i++){
       if(first_max<arr[i]){
            sec_max=first_max;
            first_max=arr[i];
        }
        else if(sec_max<arr[i] && arr[i]!=first_max){
            sec_max=arr[i];
            //cout<<"y"<<endl;
            //cout<<sec_max<<endl;
        }   
        
         


    }
    cout<<sec_max;
    return 0;
}