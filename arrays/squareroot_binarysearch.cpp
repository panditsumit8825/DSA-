#include<iostream>
using namespace std;
int findSquareroot(int n){
    int s=0;
    int e=n;
    int target = n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            e = mid-1;
        }
        else{
            ans=mid;
            s= mid+1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter a number to find its square root: ";
    cin >> n;
    // int findSquareroot (n);
    int ans = findSquareroot(n);
    cout << "The square root of " << n << " is approximately: " << ans << endl;
    return 0;

}