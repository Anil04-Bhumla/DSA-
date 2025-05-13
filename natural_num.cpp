// #include <iostream>
// using namespace std;
// int main() {
//     // for(int i = 0; i<=5;i++) {
//     //     cout <<"anil gurjar"<<endl;
//     // }
//     int n;
//     cout<<"Enter the number = ";
//     cin>>n;    
//     for(int i = 1; i<=n;i++){
//         cout<< i << "  ";
    
//     }
//     cout<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main(){
    int a=5;
    for (int i=1; i<=a; i++){
            for (int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
    }
    return 0;
}
