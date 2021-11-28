#include <iostream>
using namespace std;
int main(){
    int x1=0,y1=0;
    int x2=0,y2=0;
    int x3=0,y3=0;


    int result=0;
     
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    result=x1 * (y2 - y3) +
            x2 * (y3 - y1) +
            x3 * (y1 - y2);;
    cout <<result<<endl;
    if(result==0){
        cout<<"yes";
    }    
    else{
        cout<<"no";
    }    
    
    return 0;
}