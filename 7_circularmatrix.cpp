#include <iostream>
using namespace std;
void spiral(int m , int a[][100]){
    int val=1;
    int top=0,left=0;
    int bottom= m-1, right=m-1;
    while(top<=bottom&&left<=right){

        for(int i=left; i<=right ; i++){
            a[top][i]=val++;
        }
        top++;

        for(int i=top;i<=bottom;i++){
            a[i][right]=val++;
        }
        right--;

        if(top<=bottom)
            for(int i=right; i>=left ; i--){
                a[bottom][i]=val++;    
            }
            bottom--;

        if(left<=right)
            for(int i=bottom ; i>=top ; i--){
                a[i][left]=val++;
            }
            left++;
    }
}
int main(){
    int m=0;
    cin>>m;
    int a[100][100];
    spiral(m,a);

    for(int i=0 ; i<m; i++){
        for(int j=0 ; j<m ;j++){
            cout<<a[i][j]<<" ";

        }cout<<endl;
    }
    return 0;
}