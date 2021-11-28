#include <iostream>

using namespace std;

int main()
{
    string s1;
    cin>>s1;
    
    
    int arr[256]={0};
    
    
    for(int i=0 ; i<s1.length() ; i++){
        arr[s1[i]%256]++;
    }
    
        
    for(int i =0;i<256;i++){
        if(arr[i]!=0){
            char m = i;
            cout<< m <<"-"<<arr[i]<<endl;
        }
    }
    return 0;
}
