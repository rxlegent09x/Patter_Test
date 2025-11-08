#include<iostream>
using namespace std;

void fill_with_Value(int *x, int val, int size){
    for(int i=0; i<size; i++){
        x[i]=val;
    }
}

int main(){

//can be edit the arr values to change the pattern

    int arr[][2] = {{0,5},{0,4},{0,3},{0,2},{0,1},{0,0},{1,0},{2,0},{3,0},{3,1},{3,2},{3,3},{4,0},{5,0},{6,0},{7,0},{8,0},{6,2},{7,2},{8,2},{8,3},{8,4},{7,4},{6,4},{5,6},{6,6},{7,6},{8,6},{6,7},{5,8},{4,9},{7,8},{8,9}};

int size_arr = (sizeof(arr)/sizeof(int))/2;
int grid_size = 100;
// cout<<size_arr<<endl;

int x_arr[grid_size];

fill_with_Value(x_arr,0,grid_size);

for(int i=0; i<size_arr; i++){
    x_arr[(arr[i][0]*10)+arr[i][1]]=1;
}
cout<<endl;

for(int i=0; i<grid_size; i++){
    cout<<(x_arr[i]==0?"  ":"* ");
    if((i+1)%10==0) cout<<endl;
}
    return 0;
}
