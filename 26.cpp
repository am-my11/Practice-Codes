#include <iostream>
using namespace std;
int main(){
    string s;
    int count=0;
    cin>>s;
    while(s[count]!='\0'){
        count ++;
    }
    cout<<count;
    
    return 0;
}