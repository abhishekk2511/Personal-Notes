#include<bits/stdc++.h>
using namespace std;


int main() {
	int a[100][100];
	int n;
	cin >> n;

	//taking input
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n;j++){
			cin >> a[i][j];
		}
	}

	//reverse the rows first
	for(int i = 0; i < n; i++){
		int x = 0, y = n-1;
		while(x < y){
			swap(a[i][x], a[i][y]);
			x++;
			y--;
		}
	}

	// then transpose
	for(int i = 0; i < n;i++){
		for(int j = 0; j < n; j++){
			if(i < j){
				swap(a[i][j],a[j][i]);
			}
		}
	}

	//print the output
	for(int i = 0; i< n; i++){
		for(int j = 0; j < n;j++){
			cout <<  a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}