#include<bits/stdc++.h>
using namespace std;

void subSequences(char *ip, char *out, int i , int j, int &count){
    // Base Case
    if(ip[i] == '\0'){
        out[j] = '\0';
        cout << out << endl;
        count++;
        return;
    }

    // Recursive Case
    // 1. ignore the ith character and simply update the i value to i + 1, call function
    subSequences(ip, out, i+1, j, count);
       
    //2. take the ith character in the output array and update i and  j
    out[j] = ip[i];
    subSequences(ip,out,i+1, j+1, count);
}
int main()
{

    char ip[100];
    cin.getline(ip,100);
    char out[100];
    int count = 0;
    subSequences(ip,out, 0 , 0, count);

    cout << "Total Subsequences: " << count << endl;

 return 0;
}

