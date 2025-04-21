#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int reverse = 0;
    int lastdigit;
    while(n > 0){
        lastdigit = n % 10;   //extract the last digit
        reverse = (reverse * 10) + lastdigit;  //update the reverse
        n = n/10;  //update the n
    }
    cout<<reverse ;

    return 0;
}