#include<bits/stdc++.h>
using namespace std;
int** create2DArray(int rows,int cols){
    int** arr=new int*[rows];
    //allocate memory for each row
    for(int i=0; i<rows; i++){
        arr[i]=new int[cols];
    }
    int value=1;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            arr[i][j]=value;
            value++;
        }
    }
    return arr;

}
int main(){

  int rows,cols;
  cin>>rows>>cols;
  int** arr=create2DArray(rows,cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}