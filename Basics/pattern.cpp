#include <bits/stdc++.h>

using namespace std;

void print1(int n){

    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<< " * ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i =1;i<=n;i++){

        //for space
        for(int j = 1;j<=(n-i);j++){
            cout<< " ";
        }

        //for number 
        for(int j = 1;j <=(2*i - 1);j++){
            cout<< j ;
        }


        //for space
        for(int j = 1;j<=(n-i);j++){
            cout<< " ";
        }

        cout << endl;
    }
}

void print3

int main(){
    int n;
    cin >> n;

    print1(n);
    print2(n);
    print3(n);
}