#include<iostream>
using namespace std;
int main(){
    // for pattern
    // 1111
    // 2222
    // 3333
    // 4444

    // for(int i = 1;i<=4; i++){
    //     for(int j=1;j<=4; j++){
    //         cout << i <<" ";
    //     }
    //     cout<<endl;
    //        }
    // return 0;

    // pattern
    // *
    // **
    // ***
    // ****
    // int n = 6;
    // for(int i = 1; i <= n;i++){
    //     for(int j=1;j<= (n+1-i);j++){
    //         cout<<"*"<< " ";

    //     }
    //     cout<<endl;

    // }
    // return 0;


    // pattern
//    '1
    // 12
    // 123
    // 1234'
    //  for(int i = 1;i<=4; i++){
    //     for(int j=1;j<=i; j++){
    //         cout << j <<" ";
    //     }
    //     cout<<endl;
    //        }
    // return 0;
    


    // pattern
    // A
    // BC
    // DEF
    // GHIJ
    // char ch = 'A';
    // int n = 4;
    // for(int i= 1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<< ch;
    //         ch++;

    //     }
    //     cout<<endl;

    // }
// return 0;



// pattern
// '*****
//  *   *
//  *   *
//  *****'
//     int n =4;
//     for(int i = 1;i <=n;i++){
//         // for(int j= i ;j<=n;j++){
//         cout<<"*";
//         for(int k=1 ; k <= n-1;k++){
//             if (i == 1 ||i== n){
//                 cout<<"*";
//             } 
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"*";
//         cout<<endl;
//     }
// return 0;


//pattern 
//    *
//   **
//  ***
// ****
//     int n = 4;
//     for(int i=1;i <=n; i++){
//         for(int j = 1;j<=(n-i);j++){
//             cout<<" ";
//             }
//         for(int k = 1; k <= i;k++){
//             cout<<"*";

//         }
//     cout<<endl;
//     }
// return 0;


// pattern
// 1
// 2 3 
// 4 5 6
// 7 8 9 10 

//     int num =1;
//     int n = 5;
//     for (int i = 1;i<=n;i++){
//         for(int j =1 ; j <=i;j++){
//             cout<<num++<<" ";
            

//         }
//         cout<<endl;
//     }
// return 0;


// patttern
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *
    // int n = 4;
    // for (int i= 1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1;k <= 2*i-1 ;k++){
    //         cout<<";";

    //     }
    // cout<<endl;    
    // }
    // for (int i= n;i>=1;i--){
    //     for(int j = 1;j<=n-i;j++){
    //         cout<<" ";
    // }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<";";
    
    //     }
    // cout<<endl;
    // }




    // pattern
// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
    int n= 7;
    for(int i=1; i <=n;i++){ 
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int j =1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=1; j<=i;j++){
            cout<<"*";
        }    
        cout<<endl;    
    }
    for(int i=n; i>=1;i--){
        for(int j =1;j<=i;j++){
            cout<<"*";

        }
        for(int j =1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j =1;j<=i;j++){
    
            cout<<"*";
        }
        cout<<endl;
    }
 
    return 0;

}


