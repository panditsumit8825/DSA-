#include<iostream>
#include<algorithm>
using namespace std;

void leftRotate(int arr[], int n, int d) {
   reverse(arr,arr+d);
   reverse(arr+d, arr+n);
   reverse(arr, arr+n);
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;
    leftRotate(arr, n, d);
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
return 0;
}