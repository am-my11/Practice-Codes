#include <iostream>
#include <cmath>
using namespace std;

void roots(float a,float b, float c){
    float r1,r2;
    float dis;

    if(a==0){
        float r=0;
        r= (-c)/b ;
        cout<<"linear exp and the only root is "<<r<<endl;
        // return linear(b,c);
    }
    if(a!=0){
        dis= (b*b)- (4*a*c);

        if(dis<0){
            cout<<"Imaginary roots";
        }
        else{
            if(dis==0){
                r1=r2= (-b)/(2.0*a);
            }
            else{
                int d = sqrt(dis);
                r1=  (-b + d)/(2.0*a);
                r2=  (-b - d)/(2.0*a);
                
            }

        }cout<<"roots are "<<r1<<" and "<<r2;

    }    


}
// void linear(int b,int c){
//     float r=0;
//     r= (-c)/b ;
//     cout<<"linear exp and the only root is "<<r<<endl;
// }
int main(){
    float a=0,b=0,c=0;
    cout<<"Enter a , b , c as in ax2+bx+c"<<endl;

    cin>>a>>b>>c;

    roots(a,b,c);


    return 0;
}