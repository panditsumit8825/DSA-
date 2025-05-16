#include<iostream>
using namespace std;
int Findnthfibbo(int n){
    if (n<=1)
   {
    return n;
   }else 
   return Findnthfibbo(n-1)+Findnthfibbo(n-2);
}
   
int main(){
    int n;
    cout<<"Enter the who you want to know fobonnaci number :";
    cin>>n;
    int result = Findnthfibbo(n);
    cout<<result<<endl;
    return 0;
}