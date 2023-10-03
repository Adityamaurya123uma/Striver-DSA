//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *


#include<iostream>
using namespace std;

int main() {

    for (int i=0; i<5; i++) {
        for(int j=0; j<4-i; j++) {
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++) {
            cout<<"*";
        }
        for(int j=0; j<4-i; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
    for (int i = 4; i>=0; i--) {
        for(int j=4-i; j>0; j--) {
            cout<<" ";
        }
        for(int j=2*i+1; j>0; j--) {
            cout<<"*";
        }
        for(int j=4-i; j>0; j--) {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}