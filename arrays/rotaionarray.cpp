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
// #include<iostream>
// using namespace  std;

// void moveZerosToRight(int*a,int n){
//     int l=0,h=n-1;
//     while(l<h){
//         if (a[l]<1)
//         {
//             swap(a[l],a[h]);
//             l++;
//             h--;
//         }
//         else{
//             l++;
//         }
        
//     }
// }
// int main(){
//     int a[]={0,1,0,3,12};
//     int n=sizeof(a)/sizeof(int);
//     moveZerosToRight(a,n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     return 0 ;
// }


// #include<bits/stdc++.h>
// using namespace std;

// // comp function to perform sorting
// bool comp(const string &left, const string &right)
// {
//     if (left.size() == right.size())
//         return left < right;

//     else
//         return left.size() < right.size();
// }


// vector<string> SortingBigIntegers(vector<string> &arr)
// {
//     vector<string> sortArr(arr.begin(), arr.end());

//     // Inbuilt sort function using function as comp
//     sort(sortArr.begin(), sortArr.end(), comp);

//     return sortArr;
// }

// // Driver code of above implementation
// int main()
// {
//     vector<string> arr = {"54", "724523015759812365462",
//                     "870112101220845", "8723"};
    
//     vector<string> sortArr = SortingBigIntegers(arr);
    
//     for (auto &ele : sortArr)
//         cout << ele << " ";
        
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//   int num = 15;
//   int a = 0, b = 1;

//   // Here we are printing 0th and 1st terms
//   cout << a << ", " << b << ", ";

//   int nextTerm;

//   // printing the rest of the terms here
//   for (int i = 2; i < num; i++) {
//     nextTerm = a + b;
//     a = b;
//     b = nextTerm;

//     cout << nextTerm << ", ";
//   }

//   return 0;
// }

#include<bits/stdc++.h>

using namespace std;
// Recursive function declaration
int findGCD(int, int);
// main program
int main() {
  int first, second;
  cout << "Enter First Number: ";
  cin >> first;
  cout << "Enter second Number: ";
  cin >> second;
  cout << "GCD of " << first << " and " << second << " is " << findGCD(first, second);
  return 0;
}
//body of the function
int findGCD(int first, int second) {
  // 0 is divisible by every number
  if (first == 0) {
    return second;
  }
  if (second == 0) {
    return first;
  }
  // both numbers are equal
  if (first == second) {
    return first;
  }
  // first is greater
  else if (first > second) {
    return findGCD(first - second, second);
  }
  return findGCD(first, second - first);
}