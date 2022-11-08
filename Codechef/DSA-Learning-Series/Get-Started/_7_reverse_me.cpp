#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a[n],i;
	
	for(i=0;i<n;i++)
	    cin >> a[i];
	   
	for(i=n-1;i>=0;i--)
	    cout << a[i] << " ";
	cout << endl;
	return 0;
}