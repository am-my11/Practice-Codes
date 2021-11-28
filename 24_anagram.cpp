#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    
    int k=0 , t=0 , arr[256]={0};
    t=s1.length();
        // cout<<s1.length();
    if(t!=s2.length()){
        cout<< "Not Anagram";
    }
    else{
        for(int i=0 ; i<t ; i++){
            arr[s1[i]%256]++;
        }
        for(int i=0 ; i<t ; i++){
            arr[s2[i]%256]--;
        }
        // for(int i =0;i<256;i++){
        //     if(arr[i]!=0){
                
        //     }
        // }
        for(int i =0;i<256;i++){
            if(arr[i]!=0){
                k=5;
                std::cout << "Not Anagram" << std::endl;
                break;
            }
        }
        if(k!=5)
            cout<<"Anagram";
    }
    return 0;
}
