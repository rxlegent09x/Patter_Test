#include<iostream>
using namespace std;

void fill_with_Value(int *x, int val, int size){
    for(int i=0; i<size; i++){
        x[i]=val;
    }
}

int main(){

//can be edit the arr values to change the pattern
// {{0,5},{0,4},{0,3},{0,2},{0,1},{0,0},{1,0},{2,0},{3,0},{4,0},{6,0},{5,0},{3,1},{3,2},{4,3},{5,3},{6,3},{6,4},{6,5},{5,5},{4,5},{4,7},{5,7},{6,7},{5,8},{4,9},{6,9},{2,7},{1,7},{0,7},{0,8},{0,9},{1,9},{2,9},{2,6}}
    int arr[][2] = {{0,5},{0,4},{0,3},{0,2},{0,1},{0,0},{1,0},{2,0},{3,0},{4,0},{6,0},{5,0},{3,1},{3,2},{4,3},{5,3},{6,3},{6,4},{6,5},{5,5},{4,5},{4,7},{5,7},{6,7},{5,8},{4,9},{6,9},{2,7},{1,7},{0,7},{0,8},{0,9},{1,9},{2,9},{2,6}};

int size_arr = (sizeof(arr)/sizeof(int))/2;
int grid_size = 100;
// cout<<size_arr<<endl;

int x_arr[grid_size];

fill_with_Value(x_arr,0,grid_size);

string zero="  ";
string one = "||";

for(int i=0; i<size_arr; i++){
    x_arr[(arr[i][0]*(grid_size/10))+arr[i][1]]=1;
}
cout<<endl;

for(int i=0; i<grid_size; i++){
    cout<<(x_arr[i]==0?zero:one);
    
    if((i+1)%(grid_size/10)==0) cout<<endl;
}
    return 0;
}





