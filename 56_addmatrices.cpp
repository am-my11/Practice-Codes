#include <iostream>
using namespace std;

int main(){
    int arr1[3][3]={ {1,2,3},
                     {1,2,3},
                     {0,2,6} } ;
    int arr2[3][3]={ {4,5,6},
                     {4,5,9},
                     {1,2,3} };
    int sum[3][3]={0};

    for( int i=0 ; i<3 ; i++){
        for( int j=0 ; j<3 ; j++){
            sum[i][j]=arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == 2) {
            printf("\n");
            }
        }
    }    
    return 0;
}