#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ;
    cin>>n;
    int sum = 0;

    while(n> 0 ){
        int extractNo = n % 10; //n%10 is used to extract the last value

        sum = sum + extractNo;  //sum ke andar add karke store karwa diya

        //update the n
        n = n/10;
    }
    cout<<sum;
}