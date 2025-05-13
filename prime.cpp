#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "enter the number: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j =1;j<i; j++){
            if (i % j !=0){
            cout<< i<<"is prime number"<<endl;
            break;
            }


       
         }
        }
    }

   
    return 0;
}