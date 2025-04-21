#include<bits/stdc++.h>
using namespace std;
void GenerateStrings(char *in , char *out, int i , int j){
    // Base Case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout << out <<endl;
        return;
    }

    // recursive case
    // 1.take a single digit number
    int fd = in[i] - '0';
    char ch = 'A' + fd - 1;
    out[j] = ch;
    GenerateStrings(in, out, i+1, j+1);


    // 2. Take a two digit number <=26
    if(in[i+1] != '\0'){
        int sd = in[i+1] - '0';
        int no = 10*fd + sd;
        if(no <= 26){
            char ch = 'A' + no - 1;
            out[j] = ch;  
            GenerateStrings(in , out , i+2, j+1);
        }
    }
}
int main()
{
    char in[100], out[100]; 
    cin >> in;

    GenerateStrings(in, out, 0 ,0);
 return 0;
}