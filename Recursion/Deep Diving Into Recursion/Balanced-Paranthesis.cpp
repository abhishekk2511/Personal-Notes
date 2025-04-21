#include<bits/stdc++.h>
using namespace std;

void generateparanthesis(char *a, int i , int open , int close, int n){
	//Base case
	if(i == 2 * n){
		a[i] = '\0';
		cout << a << endl;
		return ;
	}

	// recursive Case
	if(open > close){
		// Add ')'
		a[i] = ')';
		// call recursion
		generateparanthesis(a, i+1, open, close+1, n);
	}
	
	if(open < n){
		//Add '('
		a[i] = '(';
		//call recursion
		generateparanthesis(a, i+1, open+1, close, n);
	}

}

int main() {
	int n;
	cin >> n;

	char a[100];
	generateparanthesis(a, 0, 0, 0,n);
	return 0;
}