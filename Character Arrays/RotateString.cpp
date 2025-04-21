#include<bits/stdc++.h>

using namespace std;
void RotateString (char a[], int n){
    // 1. move ith character n steps ahead
    int len = strlen(a);
    int i = len - 1;


    // move all the character to n steps ahead
    while(i >= 0){
        a[i+n] = a[i];   //a[i] vale copy to a[i + n]
        i--;
    }
    

    //2. now,  move last n characters to the front
    i = 0;
    int j = len;

    while(i < n){
        a[i] = a[j];
        i++;
        j++;
    }


    //  3. now, add null to the a[len] 
    a[len] = 0;

}

int main(){
    char a[10] = "Hello";
    int n = 3;

    cout << "Before Rotation : " << a << endl;

    RotateString(a,n);

    cout << "After Rotation : "<< a << endl;

}