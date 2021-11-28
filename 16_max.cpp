
#include <iostream>
using namespace std;
int main(){
    int max=0;
    int arr[]={1,2,3,40,5,6};
    max=arr[0];

    for(int i=1;i<6;i++){
        if(arr[i]>max)
            max=arr[i];
                
    }
    cout<<max;

    return 0;
}