#include <iostream>
using namespace std;
bool pallindrome(string s , int n){
    for(int i = 0 ; i <= n/2 ; i++){
        if(s[i]!=s[n-1-i])
            return false;
    }
    return true;
}
int main(){
    int i=0,len=0;
    string str;
    cin>>str;
    while (str[i]!=0)
    {
        i++;
    }
    // cout<<i;

    cout<<pallindrome(str,i);

    
    return 0;
}