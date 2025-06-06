#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {3,2,4};
    int target = 6;
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] + arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    cout << "Indices of elements that sum to target: ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;   
}

