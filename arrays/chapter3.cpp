#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int getMax(int brr[][3], int rows, int cols)
{
    int max = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (brr[i][j] > max)
            {
                max = brr[i][j];
            }
        }
    }
    return max;
}

// minimum value function
int getMin(int brr[][3], int rows, int cols)
{
    int min = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (brr[i][j] < min)
            {
                min = brr[i][j];
            }
        }
    }
    return min;
}
int main(){
    int rows=3;
    int cols=3;
    // int max=INT_MIN;
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
    // for (int i = 0; i < rows; i++)
    // {
    //     // int max=INT_MIN;
    //     // int sum =0;
    //     for (int j = 0; j < cols; j++)
    //     {
    //         // sum=sum+brr[i][j];
    //         // cout<<sum<<" ";
    //         if (brr[i][j]>max)
    //         {
    //             max=brr[i][j];
    //             // cout<<max<<" ";
    //         }
    //         // cout<<max<<" ";
    //         // cout<<max<<" ";
    //     }
    //     // cout<<sum<<" ";
    //     cout<<max<<" ";
    // }
    // cout<<endl;

    // getMax(brr[3][3],rows,cols);
    // cout<<getMax<<endl;
    cout<<"Maximum value :";
    cout<<getMax(brr,rows,cols)<<endl;
    cout<<"Minimum value :";
    cout<<getMin(brr,rows,cols)<<endl;

    



    return 0;
}