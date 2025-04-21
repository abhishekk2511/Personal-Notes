#include<bits/stdc++.h>
using namespace std;

void Copy(char largestStr[], char a[]){
    //copy 

    int len = strlen(a);
    for(int i =0; i <= len; i++){
        largestStr[i] = a[i];
    }
    return;
}
int main(){
    char a[100];
    int n;
    cin >> n;
    cin.get();       // this is important it ignore the enply line.

    char largestStr[100];
    int largest_len = 0;

    for(int i = 0; i< n; i++){
        cin.getline(a,100);
        int len = strlen(a);

        if(largest_len < len){
            largest_len = len;
            Copy(largestStr,a);
        } 
    }

    cout << largestStr << endl;
    cout <<"length"<<  largest_len <<endl ;
    return 0;
}

