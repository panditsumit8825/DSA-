#include<iostream>
using namespace std;
int main(){
    // 2d array
    int arr[3][3];
    // initialize 
    int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // cout<<brr[1][0]<<endl;
    // row-wise print
    // outer loop
    for (int i = 0; i < 3; i++)
    {
        // print value of column for each row
        for (int j = 0; j < 3; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    


    return 0;
}