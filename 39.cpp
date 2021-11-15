#include <iostream>
using namespace std;
int main(){
    int x1=0,y1=0;
    int x2=0,y2=0;
    int x3=0,y3=0;


    float result;
    float area;
     
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    result=abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    area = result/2;
    cout<<area; 
    
    return 0;
}