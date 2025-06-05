#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void movesZero(int arr[] , int n){
    int index =0;
    for (int i= 0; i < n; i++)
    {
        if (arr[i] !=0)
        {
            arr[index++]= arr[i];
        }
    }
    while (index<n)
    {
        arr[index++] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    int arr[]={0,1,0,3,12};
    n=sizeof(arr)/sizeof(int);
    movesZero(arr,n);
    return 0;
}

// #include<iostream>
// using namespace std;

// void moveZeroes(int arr[], int n) {
//     int index = 0; // points to position to place next non-zero

//     // Move non-zero elements to the front
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             arr[index++] = arr[i];
//         }
//     }

//     // Fill the rest with zeros
//     while (index < n) {
//         arr[index++] = 0;
//     }

//     // Print the updated array
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {0, 1, 0, 3, 12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     moveZeroes(arr, n);
//     return 0;
// }
