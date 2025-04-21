#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int countPrime = 0;
    int i = 2;
    while(i<n){

        if(n % i == 0){
            cout<< "No it is a not Prime No.";
            return 0;
        }
        i++;
    }
    cout<<"Yes it is a Prime No.";
}