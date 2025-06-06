#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1};
    int single = 0;
    for (int num : arr) {
        single ^= num;
    }
    cout << single << endl;
    return 0;
}