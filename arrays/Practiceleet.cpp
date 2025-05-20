#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
// int main(){
    // vector<int> arr={1,2,2,3,3,9,4,5};
    // int i=0;
    // int bool;
    // vector<int> ans;
    // arr.push_back(5);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<arr;
    // for (int i = 1; i < arr.size(); i++)
    // {
    //     if (arr[i]>=arr[i-1])
    //     {
            // cout<<"The array is sorted"<<endl;
        // }
        // else{
        //     return true;
        // }
        // cout<<"The array is sorted"<<endl;
        // cout<<ans[i]<<" ";
        // else{
        //     cout<<"Unsorted array"<<endl;
        // }
    // }
    // return false;
    // cout<<"Unsorted array"<<endl;
    // cout<<ans[i]<<" ";
    // if (arr[i]<=arr[i+1])
    // {
    //     cout<<"Sorted array"<<endl;
    // }
    // else{
    //     cout<<"Unsorted array"<<endl;
    // }
    // cout<<endl;
    


//     return 0;
// } 

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {5, 2, 9, 1, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Brute force sorting using Bubble Sort
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements if they are in the wrong order
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // Print the sorted array
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

int main(){
    // vector<int> arr={1,2,2,3,3,9,4,5};
    int brr[]={1,2,2,3,3,9,4,5};
    bool isSorted=true;
    // int n=8;
    int n=sizeof(brr)/sizeof(brr[0]);
    for (int i = 0; i <n-1; i++)
    {
        if (brr[i]>=brr[i+1])
        {
            isSorted=false;
            break;
        // }
        // else{
        //     cout<<"True"<<endl;;
        // }
    // return true;
        //  cout<<"false";
    }
    
    if (isSorted)
        cout << "The array is sorted in ascending order.\n";
    else
        cout << "The array is NOT sorted.\n";
    
    }
    return 0;
}