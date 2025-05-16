// CHALLENGE NO. 1

// #include<iostream>
// using namespace std;
// int main(){
// int cups;
// double Pricepercup , Totalprice , Discountprice ;
// cout<<"Enter the number of cups :";
// cin>>cups;
// cout<<"Enter the amount of Pricepercup :";
// cin>>Pricepercup;
// Totalprice = cups*Pricepercup;
// if (Totalprice>100)
// {
//     Discountprice = Totalprice-(Totalprice*0.05);
//     cout<<"The final price is "<<Discountprice;
// }else{
//     cout<<"Total price is :" <<Totalprice;
// }
// return 0;
// }

// CHALLENGE NO. 2

#include<iostream>
#include<string>
using namespace std;
int main(){
    int Teabag;
    int final_Teabag;
    cout<<"How many tea bags you want :";
    cin>>Teabag;
    // getline(cin,Teabag);
    if (Teabag<10)
    {
        final_Teabag = Teabag+5;
        cout<<final_Teabag;
    }else{
        cout<<"The final tea bag is :"<<Teabag;
    }
return 0;
}