#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    // int arr[5]={2,6,9,4,5};
    // cout<<"run successfully"<<endl;
    // cout<<arr[3];

    //taking input
    // int arr[10];
    // cout<<"Enter the values"<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cin>>arr[i];
    // }
    
    // // Printing the values of array
    // cout<<"Values of the array"<<endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // int arr[5];
    // cout<<"enter the input elements"<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>arr[i];
    // }

    // cout<<"Here the double value of elements"<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<2*arr[i]<<" ";
    // }
    
    // int n=0;
    //  int arr[]= {1,3,5,7,9};
    //  cout<<arr[3]<<endl;
    //  for (int i = 0; i <5 ; i++)
    //  {
    //     arr[i]=1;
    //  }
    //  for (int i = 0; i < 5; i++)
    //  {
    // cout<<arr[i]<<" ";
    //  }
    
        // arrays to refernce by value concept  

    // void printArray(int arr[],int size){
    //     for (int i = 0; i < size; i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // void inc(int arr[],int size){
    //     arr[0]=arr[0]+10;
    //     printArray(arr,size);

    // }
    // int main(){
    // int arr[]={5,6};
    // int size=2;
    // inc(arr,size);
    // printArray(arr,size);

        // finds key in array 

    //  bool find(int arr[],int size,int key){
    //     // linear search
    //     for (int i = 0; i < size; i++)
    //     {
    //         if (arr[i]==key)
    //         {
    //             return true;
    //         }
    //     }
    //     // Not Present
    //     return false;
        

    //  }
    // int main(){
    // int arr[5]={1,3,5,7,9};
    // int size=5;
    // cout<<"Enter the key to find"<<endl;
    // int key;
    // cin>>key;
    // if(find(arr,size,key)){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found"<<endl;
    // }

        //  Finds 0's and 1's in array 

        // int arr[]={0,1,0,1,1,1,0,0,0,1,1,1,0,0,0};
        // int size=15;
        // int numZero=0;
        // int numOne=0;
        // for (int i = 0; i < size; i++)
        // {
        //     if (arr[i]==0)
        //     {
        //         numZero++;
        //     }
        //     if (arr[i]==1)
        //     {
        //         numOne++;
        //     }
        // }
        // cout<<"NUmber of zeros is :"<<numZero<<endl;
        // cout<<"NUmber of ones is :"<<numOne<<endl;

     // find maximum number in array

    // int max=INT_MIN;
    // int arr[]={4,98,67,24,90,056,104};
    // int size=7; 
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i]>max)
    //     {
    //         max=arr[i];

    //     }
        
    // }
    // cout<<"Maximum number is:"<<max<<endl;
    

    // find minimum number in array

    // int min=INT_MAX;
    // int arr[]={4,98,67,24,90,056,104};
    // int size=7; 
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i]<min)
    //     {
    //         min=arr[i];

    //     }
        
    // }
    // cout<<"Minimum number is:"<<min<<endl;
    

    // Extreme print in array

    // int arr[]={1,2,3,4,5,6,7,8,9};
    // int size=9;
    // int start=0;
    // int end=size-1;
    // while (true)
    // {
    //     if (start>end)
    //     break;
    //     if (start==end)
    //     {
    //         cout<<arr[start]<<" ";
    //     }
    //     else{
    //     cout<<arr[start]<<" ";
    //     cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
    // }
    

    // Reverse in array

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int start=0;
    int end=size-1;
    while (start<=end)
    {
        // step1
        swap(arr[start],arr[end]);
        // step2
        start++;
        // step3
        end--;
    }
    // Printing array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Sumit Kumar";
    cout<<"noida electronic";
    
    

    return 0;
}