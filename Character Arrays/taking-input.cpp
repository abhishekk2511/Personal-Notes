#include<bits/stdc++.h>
using namespace std;

void Readline(char a[],char delimeter){
    int i = 0;
    char ch  = cin.get(); //Ignore WhiteSpace Characters

    while(ch != delimeter){
        a[i] = ch;
        i++;
        ch = cin.get();
    }
    a[i] = '\0';
}   

int StringLength(char a[]){
    int i;
    for(i = 0; a[i] != '\0'; i++){
    }
    return i;
}
int main()
{       
    char a[100];
    // Readline(a, '$');

    cin.getline(a,100);   //getLine Function
    // int ans = StringLength(a);
    // cout  << ans << endl;

    // inbuilt finding length of a string function
    cout << strlen(a);
    return 0;
}