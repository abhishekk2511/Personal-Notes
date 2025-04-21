#include<bits/stdc++.h>
using namespace std;
int stringToInt(char *a, int n){
    // Base Case
    if(n == 0){
        return 0;
    }
    //Recursive Case
    int digit = a[n-1] - '0';  //picked the last digit a[n-1] and subtract it with '0' it will give the last digit in form of integer
    int smallerAns = stringToInt(a, n-1);
    int biggerAns = smallerAns * 10 + digit;
    return biggerAns;
}
int main()
{
    char a[] = "4329";
    int n = strlen(a);

    int ans = stringToInt(a, n);  //function Call
    cout << ans << endl;
    cout << ans + 1 << endl;
 return 0;
}