// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input :
// 1 1 1
// 1 0 1
// 1 1 1
// Output :
// 1 0 1
// 0 0 0
// 1 0 1
#include<iostream>
using namespace std;
int main()
{
    int rowc;
    int colc;
    int arr[3][3]={{1,1,1},{1,0,1},{1,1,1}};
    int row = sizeof(arr)/sizeof(arr[0]);
    int coloum = sizeof(arr[0])/sizeof(arr[0][0]);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloum;j++)
        {
            if(arr[i][j]==0)
            {
                 rowc = i;
                 colc = j;
            }
        }
    }
    for(int i=0;i<row;i++ )
    {
        arr[i][colc]=0;
    }
    for(int j=0;j<coloum;j++)
    {
        arr[rowc][j]=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<coloum;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}