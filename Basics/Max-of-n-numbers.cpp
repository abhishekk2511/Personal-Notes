#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    int largest = INT_MIN;
    int number;

    while(i<=n){
        cin >> number;

        if(largest < number){
            largest = number;
        }

        i++;
    }

    cout<<largest;
    return 0;
}