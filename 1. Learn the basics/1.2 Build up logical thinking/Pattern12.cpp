#include<iostream>
using namespace std;

int main() {
    for(int i=0;i<4;i++){
        int num1 = i;
        int space = 8 - (2*i);
        int num2 = i;
        for(int j=0;j<=num1;j++){
            cout<<j+1;
        }
        for(int j=1;j<space-1;j++){
            cout<<"*";
        }
        for(int j=0;j<=num2;j++){
            cout<<(i+1)-j;
        }
        cout<<endl;
    }
    return 0;
}