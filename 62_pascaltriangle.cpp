#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n=0;
    int num=0,rem=0,t=1;
   
    int arr[50]={0};
    
    cin>>n;
    
    for(int i=0 ; i<n ; i++){
        num=pow(11,i);
        // cout<<num<<endl;
        int j=0;
        while (num!=0){
            // int j=0;
            rem=num%10;
            arr[j]=rem;
            num=num/10;
            // cout<<arr[j]<<endl;
            j++;
        }
        // for(p=0 ;p<t ; p++){
        //     cout<<arr[p]<<" ";
        // }
        for(int k=t ; k<n ; k++){
            cout<<" ";
        }
        for(int p=0 ; p<=i ;p++){
            cout<<arr[p]<<" ";
        }
        t++;
        cout<<endl;
    }
    
    return 0;
}