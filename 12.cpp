#include <iostream>
using namespace std;

int main(){
    int count=0;
    int i=0,j=0;

    string st,temp;
    cin>>st;
    while(st[count]!='\0'){
        count++;

    }

    for(i=0;i<=count/2;i++){
        temp[i]=st[i];
        st[i]=st[count-1-i];
        st[count-1-i]=temp[i];
    }

    cout<<st;

    return 0;
}