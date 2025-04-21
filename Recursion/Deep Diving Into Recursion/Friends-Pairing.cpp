#include<bits/stdc++.h>
using namespace std;

int friends(int n){
    //Base Case
    if(n == 0 ||  n == 1){
        return 1;
    }

    // recursive Case
    return friends(n-1) + (n-1) * friends(n-2);
 

}
int main()
{
    int n;
    cin >> n;
    cout <<"total Ways : " << friends(n) << endl;
    return 0;
}