#include <iostream>
using namespace std;
int main(){
    int min=0;
    int arr[]={1,2,3,40,5,6};
    min=arr[0];

    for(int i=1;i<6;i++){
        if(arr[i]<min)
            min=arr[i];
                
    }
    cout<<min;

    return 0;
}