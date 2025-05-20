#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    int rows=3;
    int cols=3;
    int arr[3][3];
    int brr[3][3]={{1,2,3},{4,5,6},{6,7,8}};
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
    // }
    // cout<<endl;
    // cout<<"Printing arrays"<<endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    cout<<"Printing arrays"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    



    return 0;
}