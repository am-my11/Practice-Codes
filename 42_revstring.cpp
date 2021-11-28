#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string s;
    int n;
    char temp;
    getline(cin,s);
    n=s.length();
    cout<<n<<endl;

    for(int i=0 ; i<n/2 ; i++){
        temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;
    }

    cout<<s;






    
    return 0;
}