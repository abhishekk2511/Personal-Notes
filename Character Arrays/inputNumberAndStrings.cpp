#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int n;
    cin >> n;

    cin.get();
    // --> we use this because after taking n as an input it take the \n as an input 0f the string, we read the input pointer  \n but we did not store it anywhere

    for(int i = 0 ; i < n;i++){
        cin.getline(a,100);
        cout << a <<endl;
    }

    return 0;
}