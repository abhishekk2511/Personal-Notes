#include<iostream>
#include<cstring>
using namespace std;

bool isPallindrome(char a[]){
    int i = 0;
    int j = strlen(a) - 1;


    //  in this --> (abcba) when i = j it means is a palindrome .   
    while(i < j){
        if(a[i] != a[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;   
}
int main()
{
    char a[100];
    cin >> a;

    if(isPallindrome(a) == true){
        cout << "Is a pallindrome";
    }

    else{
        cout << "Not a Pallindrome";
    }

 return 0;
}