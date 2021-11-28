#include <iostream>
using namespace std;

int main(){
    int bnum=0;
    int dec=0;
    int magicfac=1,rem=0;

    cout<<"Enter binary form"<<endl;
    cin>>bnum;

    while (bnum!=0)
    {
        rem=bnum%10;
        dec+=rem*magicfac;
        magicfac*=2;
        bnum=bnum/10;
    }
    
    cout<<"decimal form is "<<dec;
    return 0;
}