#include<iostream>
using namespace std;
void Pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
            cout<<endl;
    }
    
}
void Pattern2(int n){
    for (int  i = 0; i <=n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void Pattern3(int n){
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<< j ;
        }
        cout<<endl;
    }
    
}
void Pattern4(int n){
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<< i <<" " ;
        }
        cout<<endl;
    }
}
void Pattern5(int n){
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 0; j <= n-i+1; j++)
        {
            cout<< j ;
        }
        cout<<endl;
    }
}
void Pattern6(int n){
    for (int  i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<< j <<" ";
        }
        cout<<endl;
    }
}
void Pattern7(int n){
    for (int  i = 0; i <=n; i++)
    {   
        // space
        for (int j = 0; j <n-i+1; j++)
        {
            cout<<" ";
        }
        //  star
        for (int j = 1; j <= 2*i+1; j++)
        {   
            cout<<"*" ;
        }
        // space 
        for (int j = 0; j < n-i+1; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
}
void Pattern8(int n){
    for (int  i = 0; i <=n; i++)
    {   
        // space
        for (int j = 0; j <=i; j++)
        {
            cout<<" ";
        }
        //  star
        for (int j = 1; j <= 2*n-(2*i+1); j++)
        {   
            cout<<"*" ;
        }
        // space 
        for (int j = 0; j <i; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
}
void Pattern9(int n){
    for (int  i = 0; i <=n; i++)
    {   
        // space
        for (int j = 0; j <n-i+1; j++)
        {
            cout<<" ";
        }
        //  star
        for (int j = 1; j <= 2*i+1; j++)
        {   
            cout<<"*" ;
        }
        // space 
        for (int j = 0; j < n-i+1; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
    for (int  i = 0; i <=n; i++)
    {   
        // space
        for (int j = 0; j <=i+1; j++)
        {
            cout<<" ";
        }
        //  star
        for (int j = 1; j <= 2*n-(2*i+1); j++)
        {   
            cout<<"*" ;
        }
        // space 
        for (int j = 0; j <n-i+1; j++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
}
void Pattern10( int n){
    for (int i = 1; i <2*n-1; i++){
        int stars=i;
        if (i>n) stars = 2*n - i;
        for (int j = 1; j<= stars; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void Pattern11(int n){
    int start =1;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0) start =1;
        else start=0;
        for (int j = 0; j <=i; j++)
        {
            cout<<start;
            start = 1-start;
        }
    cout<<endl;
    }
    
}
void Pattern12(int n){
    int space = 2*(n-1);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <=space; j++)
        {
            cout<<" ";
        }
        for (int j = i; j >=1; j--)
        {
            cout<<j;
        }
            cout<<endl;
            space-=2;
    }
    
}
void Pattern13(int n){
    int num=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    
}
void Pattern14(int n){
    for (int i = 0; i <n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void Pattern15(int n){
        for (int i = 0; i <n; i++)
        {
            for (char ch = 'A'; ch <= 'A' + (n-i+1); ch++)
            {
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
int main(){
    int n;
    cin>>n;
    Pattern15(n);
    // Pattern7(n);
    // Pattern8(n);
    return 0;
}