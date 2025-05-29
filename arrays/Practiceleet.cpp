// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;
// int main(){
//     int brr[]={1,2,2,3,3,4,5};
//     bool isSorted=true;
//     int n=sizeof(brr)/sizeof(brr[0]);
//     for (int i = 0; i < n; i++)
//     {
//         if (brr[i]>brr[i+1])
//         {
//             isSorted = false;
//             break;
//         }
        
//     }
//     if (isSorted)
//     {
//         cout<<"Sorted array"<<endl;
//     }
//     else{
//         cout<<"Unsorted array"<<endl;
//     }
//     return 0;
// }


// find missing element in array
//  M-1
#include<iostream>
using namespace std;
void findMissing(int *a , int n){
    for (int i = 0; i <n; i++)
    {
        int index = abs(a[i]);
        if (a[index-1] > 0)
        {
            a[index - 1] *= -1;
        }
        
    }
    // for visiting element
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // find missing element
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<" ";
    }
    
    
}
int main(){
int n;
int a[]={1,3,5,3,4};
n=sizeof(a)/sizeof(int);
findMissing(a,n);
    return 0;
}
