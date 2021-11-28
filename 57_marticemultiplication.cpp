#include <iostream>
using namespace std;

int main(){
    int arr1[3][3]={{1,2,3},
                    {2,3,4},
                    {3,4,5}};

    int arr2[3][3]={{2,3,4},
                    {3,4,5},
                    {4,5,6}};

    int M[3][3]={0};
    int i , j , k ;
    for( i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            for(k=0 ; k<3 ; k++){
                M[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 ; j++)
           cout <<" "<< M[i][j];
        cout <<"\n";
    }

    return 0;
}