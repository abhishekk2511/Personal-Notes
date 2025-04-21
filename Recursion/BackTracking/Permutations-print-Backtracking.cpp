#include<bits/stdc++.h>
using namespace std;
void Permutations(char *a, int i){
    // base case
    if(a[i] == '\0'){
        cout <<a <<endl;
    }

    //recursive case
    for(int  j = i; a[j] != '\0'; j++){
        swap(a[j], a[i]);
        Permutations(a, i+1);
        swap(a[j], a[i]); //backtracking, reverse or undo those change that we do
    }


}
int main()
{

    char a[] = "abc";
    Permutations(a,0);
 return 0;
}