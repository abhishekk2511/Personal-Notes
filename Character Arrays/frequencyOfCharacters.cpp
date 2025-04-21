#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[] = "abcba";
    int freq[26] = {0};

    // fill the frequency array
    for(int i = 0; a[i] != '\0';i++){
        char ch = a[i];
        int index = ch - 'a';
        freq[index]++;
    }

    // for(int i = 0; i < 26; i++){
    //     cout << freq[i] << " ";
    // }


    for(int  i =0 ; i < 26 ; i++){
        char x = i + 'a';
        cout << "character "  << x << "-->" << freq[i] << endl; 
    }
 return 0;
}