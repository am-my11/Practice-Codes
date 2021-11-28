#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int j=0; j<n ; j++){
        int num=0;
        int i=0;

        cin>>num;

        while(i*i<=num){
            

            i+=1;
        }
        cout<<i-1<<endl;
    }
    
    return 0;
}