#include<iostream>
using namespace std;
 int main() {
    int n;
    cout<< "Enter the number =";
    cin>>n;
    int lastdigit ;
    int sum =0;
     
    while( n>0 ) {

        lastdigit = n%10;
        if (lastdigit%2 == !0){

            sum += lastdigit;
            n = n/10;}
        // cout<<sum<<endl;
    }

    cout<<sum<<endl;
    return 0;
 }

    