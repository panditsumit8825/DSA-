#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main(){
    int brr[]={1,2,2,3,3,4,5};
    bool isSorted=true;
    int n=sizeof(brr)/sizeof(brr[0]);
    for (int i = 0; i < n; i++)
    {
        if (brr[i]>brr[i+1])
        {
            isSorted = false;
            break;
        }
        
    }
    if (isSorted)
    {
        cout<<"Sorted array"<<endl;
    }
    else{
        cout<<"Unsorted array"<<endl;
    }
    return 0;
}