// move negative number to left side of an array

// #include<iostream>
// using namespace std;

// void moveAllNegToLeft(int*a,int n){
//     // Dutch national flag algo
//     int l=0,h=n-1;
//     while(l<h){
//         if (a[l]<0)
//         {
//             l++;
//         }
//         else if (a[h]>0)
//         {
//                 h--;
//         }
//         else{
//             swap(a[l],a[h]);
//         }
        
        
//     }
// }
// int main(){
//     int a[]={1,2,-3,4,-5,6};
//     int n = sizeof(a)/sizeof(int);

//     moveAllNegToLeft(a, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
    
//     return 0;
// }

// shifting zeros to right side of array
#include<iostream>
using namespace  std;

void moveZerosToRight(int*a,int n){
    int l=0,h=n-1;
    while(l<h){
        if (a[l]<1)
        {
            swap(a[l],a[h]);
            l++;
            h--;
        }
        else{
            l++;
        }
        
    }
}
int main(){
    int a[]={0,1,0,3,12};
    int n=sizeof(a)/sizeof(int);
    moveZerosToRight(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0 ;
}