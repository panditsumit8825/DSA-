#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int binarySearch(int arr[], int size, int target){
//     int start = 0;
//     int end = size - 1;

//     int mid = (start + end) / 2;
//     while (start<=end){
//         int element = arr[mid];
//         if(element == target){
//             return mid;
//         }
//         else if(element < target){
//             //  Search in left
//             end = mid + 1;
//         }
//         else{
//             // Search in right
//             start = mid + 1;
//         }
//         mid= (start + end) / 2;
//     }
//     return -1; // Target not found
// }
// int main(){
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int size = 9;
//     int target = 5;
//     int indexOftarget = binarySearch(arr, size, target);
//     if(indexOftarget == -1){
//         cout<<"Target not found"<<endl;
//     }else{
//         cout<<"Target found at "<<indexOftarget<<endl;
//     }
//     return 0;
// }
int main(){
vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
if(binary_search(arr.begin(), arr.end(), 15)) {
    cout << "Target found" << endl;
} else {
    cout << "Target not found" << endl;
}
return 0;
}