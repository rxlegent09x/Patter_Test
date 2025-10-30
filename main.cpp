#include<iostream>
using namespace std;
int main(){

//can be edit the arr values to change the pattern

    int arr[][2] = {{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{0,9},{1,4},{2,4},{1,5},{2,5},{1,0},{1,1},{1,2},{1,3},{1,6},{1,7},{1,8},{1,9},{3,4},{3,5},{4,4},{4,5},{4,3},{4,2},{4,1},{4,0},{5,0},{5,1},{5,2},{5,3},{5,4},{5,5},{6,1},{6,2},{7,2},{7,3},{8,3},{8,4},{9,4},{9,5}};

int size_arr = (sizeof(arr)/sizeof(int))/2;

cout<<size_arr<<endl;
int temp=0;
int i_j = 10;

for(int i=0; i<i_j; i++){
    for(int j=0; j<i_j; j++){
        for(int k=0; k<size_arr; k++){
            if(arr[k][0] == i && arr[k][1] == j){
                cout<<"*";
                temp=true;
                
            }
          
        }

         if(!temp) cout<<" ";
           temp=false;
        
    }
    cout<<endl;
}



    return 0;
}