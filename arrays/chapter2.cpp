#include<iostream>
#include<vector>
using namespace std;
// int main(){
    // create vector
    // vector<int> arr;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;
    // // int ans= (sizeof(arr)/sizeof(int));
    // // cout<<ans<<endl;
    // // insert value in vector
    // arr.push_back(8);
    // arr.push_back(3);
    // // print vector array
    // for (int i = 0; i <arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl; 
    // arr.pop_back();
    // for (int i = 0; i <arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // int n;
    // cout<<"Enter the value of n ";
    // cin>>n;
    // vector<int> brr(n,-1);
    // cout<<"Size of brr "<<brr.size()<<endl;
    // cout<<"capacity of brr "<<brr.capacity()<<endl;
    // for (int i = 0; i <brr.size(); i++)
    // {
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;
    



    //  Problem Solving
    // find a unique element in array 


    // int findUnique(vector<int> arr){
    //     int ans=0;
    //     for (int i = 0; i <arr.size(); i++)
    //     {
    //         ans = ans^arr[i];
    //     }
    //     return ans;
        
    // }
    // int main(){
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // vector<int> arr(n);
    // cout<<"Enter the values of array: ";
    // // taking input
    // for (int i = 0; i <arr.size(); i++)
    // {
    //     cin>>arr[i];
    // }
    // int uniqueElement= findUnique(arr);
    // cout<<"unique Element is "<< uniqueElement<<endl;
    

    // Union of two arrays
    // int main(){
    // int arr[]={2,3,5,6,7};
    // int sizea=5;
    // int brr[]={1,4,8,9};
    // int sizeb=4;
    // vector<int> ans;
    // // printiing of all elements
    // for (int i = 0; i <sizea ; i++)
    // {
    //     ans.push_back(arr[i]);
    // }
    // for (int i = 0; i <sizeb ; i++)
    // {
    //     ans.push_back(brr[i]);
    // }
    
    // cout<<"Union of two arrays is: "<<endl;

    // for (int i = 0; i <ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    


    // intersection in array
    int main(){
        int arr[]={1,2,3,4,5,6,7,8};
        int sizea=8;
        int brr[]={1,2,3,4,9};
        int sizeb=5;
        vector<int> ans;
        // outer loop on arr vector
        for (int i = 0; i < sizea; i++)
        {
            int element = arr[i];
        //  for array b
        for (int j = 0;  j< sizeb; j++)
        {
            if (element == brr[j])
            {
                ans.push_back(element);
            }
        }
    }
    for (auto value:ans)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    
        
    return 0;


}