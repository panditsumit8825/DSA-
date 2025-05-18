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
    // int main(){
    //     int arr[]={1,2,3,3,4,5,6,7,8};
    //     int sizea=8;
    //     int brr[]={1,2,3,4,3,9};
    //     int sizeb=5;
    //     vector<int> ans;
    //     // outer loop on arr vector
    //     for (int i = 0; i < sizea; i++)
    //     {
    //         int element = arr[i];
    //     //  for array b
    //     for (int j = 0;  j< sizeb; j++)
    //     {
    //         if (element == brr[j])
    //         {
    //             // mark
    //             brr[j]=-1;
    //             ans.push_back(element);
    //         }
    //     }
    // }
    // for (auto value:ans)
    // {
    //     cout<<value<<" ";
    // }
    // cout<<endl;
    
        
    // Pair some

    // int main(){
    //     vector<int> arr{10,20,30,40,50,60,70};
    //     int sum=100;
    //     // print all pairs
    //     // outer loop traverse for each element
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         int element = arr[i];
    //         // for every elements traverse for apne aage wale elements
    //         for (int j = i+1; j < arr.size(); j++)
    //         {
    //             // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //             if (element+arr[j]==sum)
    //             {
    //                 cout<<"Pair found "<<element<<","<<arr[j]<<endl;
    //             }
                
    //         }
            
    //     }

    // three pair sum
    // int main(){
    //     vector<int> arr={10,20,30,40,60,80,70};
    //     int sum=100;
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         int element1=arr[i];
    //         for (int j = i+1; j < arr.size(); j++)
    //         {
    //             int element2=arr[j];
    //             for (int k = i+2; k < arr.size(); k++)
    //             {
    //                 int element3=arr[k];
    //                 if (element1+element2+element3==sum)
    //                 {
    //                     cout<<element1<<","<<element2<<","<<element3<<" "<<endl;
    //                 }
                    
    //             }
                
    //         }
            
    //     }

    // four sum
    //     int main(){
    //     vector<int> arr={10,20,30,40,60,80,70};
    //     int sum=150;
    //     for (int i = 0; i < arr.size(); i++)
    //     {
    //         int element1=arr[i];
    //         for (int j = i+1; j < arr.size(); j++)
    //         {
    //             int element2=arr[j];
    //             for (int k = i+2; k < arr.size(); k++)
    //             {
    //                 int element3=arr[k];
    //                 for (int p = k+1; p < arr.size(); p++)
    //                 {
    //                     int element4=arr[p];
    //                     if (element1+element2+element3+element4==sum)
    //                 {
    //                     cout<<element1<<","<<element2<<","<<element3<<","<<element4<<" "<<endl;
    //                 }
    //                 }
                    
    //             }
                
    //         }
            
    //     }
        
        
    // sort 0's and 1's
    int main(){
        vector<int> arr={0,1,0,0,1,1,1,0,1,0,1};
        int start=0;
        int end=arr.size()-1;
        int i=0;
        while (i!=end)
        {
            if (arr[i]==0)
            {
                swap(arr[start],arr[i]);
                i++;
                start++;
            }
            else{
                swap(arr[i],arr[end]);
                end--;
            }
        }
        for(auto value:arr){
            cout<<value<<" ";
        }
        cout<<endl;
        

    return 0;


}