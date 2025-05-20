#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    int rows=3;
    int cols=3;
    int max=INT_MIN;
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
    cout<<"Printing arrays"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Printing sum row wise
    // for (int i = 0; i < rows; i++)
    // {
    //     int sum =0;
    //     for (int j = 0; j < cols; j++)
    //     {
    //         sum=sum+brr[i][j];
    //         // cout<<sum<<" ";
    //     }
    //     cout<<sum<<" ";
    // }
    // cout<<endl;
    
    // cout<<"Printing arrays"<<endl;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;

    // Printing sum column wise
    // for (int i = 0; i < rows; i++)
    // {
    //     int sum =0;
    //     for (int j = 0; j < cols; j++)
    //     {
    //         sum=sum+brr[j][i];
    //         // cout<<sum<<" ";
    //     }
    //     cout<<sum<<" ";
    // }
    // cout<<endl;

    // Find max element in 2d array
    for (int i = 0; i < rows; i++)
    {
        // int sum =0;
        for (int j = 0; j < cols; j++)
        {
            // sum=sum+brr[i][j];
            // cout<<sum<<" ";
            if (brr[i][j]>INT_MIN)
            {
                max=brr[i][j];
            }
            cout<<max<<" ";
        }
        // cout<<sum<<" ";
    }
    cout<<endl;

    
    



    return 0;
}