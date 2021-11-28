#include <iostream>
using namespace std;
int main(){
    string s,result;
    getline(cin,s);
    int start=0;
    int i=s.length()-1;
    int end=s.length();

    while(i>=0){
        if(s[i]==' '){
            start=i+1;
        
            while (start!=end){
                result+=s[start];
                start++;
            }
            
        
        // if(i==0){
        //     break;
        // }
            result+=' ';
            end=i;
        }i--;    
    }
    start = 0;
    while(start != end){
        result += s[start];
        start++;
    }
    cout<<result;
    return 0;
}