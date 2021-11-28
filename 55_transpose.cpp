#include <iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},
                   {9,4,6},
                   {7,8,5} };
    int brr[3][3]={0};
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            brr[i][j] = arr[j][i];    

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ; j++)
           cout <<" "<< brr[i][j];
        cout <<"\n";
    }                
    
    return 0;
}