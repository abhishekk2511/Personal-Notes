#include<bits/stdc++.h>
using namespace std;

string a[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

void IntegerToString(int n) {
    //Base case
    if(n == 0){
        return;
    }

    //Recursive Case
    int digit = n % 10;
    IntegerToString(n / 10);
    cout << a[digit] <<" ";
}

int main()
{

    int n = 204815;
    IntegerToString(n);
    cout << endl;
    
 return 0;
}