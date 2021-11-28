#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void outcome(int fpp , int comp){
    if(fpp==comp){
        cout<<"Computer choses "<<comp<<endl;
        cout<<"Aah!, Thats a Tie"<<endl;
    }
    else if(comp==1){
        cout<<"computer choses "<<comp<<endl;
        switch(fpp){

            case 2:
                cout<<"Hurrah! You win"<<endl;
                break;
            case 3:
                cout<<"Damn! , you lose "<<endl;
                break;    
        }
    }
    else if(comp==2){
        cout<<"computer choses "<<comp<<endl;
        switch(fpp){

            case 1:
                cout<<"Damn! , you lose "<<endl;
                break;
            case 3:
                cout<<"Hurrah! You win "<<endl;
                break;
        }
    }       
    else if(comp==3){
        cout<<"computer choses "<<comp<<endl;
        switch(fpp){

            case 1:
                cout<<"Hurrah! You win "<<endl;
                break;
            case 2:
                cout<<"Damn! , you lose "<<endl;
                break;
        }      
    }
}

int main(){
    int i=0,comp=0,j=0;
    int user;
    srand(time(0));
    cout<<"To start the game enter 1"<<endl;
    cin>>i;
        if(i==1){
            while (1)
            {   int j=0;
                comp = 1+(rand() % 3);
                cout <<"Type 1 for rock,2 for paper,3 for scissors"<<endl;
                cin>>user;
                outcome(user , comp);

                cout<<"To Exit game press 0 and to continue press other than 0"<<endl;
                cin>>j;

                if(j==0){
                    break;
                }
                else{
                    continue;
                }

            }
        }
        else{
            cout<<"Have a bad day"<<endl;
        }

    return 0;
}