#include <iostream>
using namespace std;
void printascii(char t, int p, int n){
    for(int i=1 ; i<=n ; i++){
        cout<<t<<" = "<<p<<endl;
        t++;
        p++;
    }
}    
int main(){
    char chr1='a';
    char chr2='A';

    printascii(chr1 ,chr1, 26);
    printascii(chr2 ,chr2, 26);    

    return 0;
}