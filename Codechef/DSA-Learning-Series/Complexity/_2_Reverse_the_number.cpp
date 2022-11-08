#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int d, rev=0;
	    while(n>0){
	        d = n % 10;
	        rev = rev * 10 + d;
	        n/=10;
	    }
	    cout << rev << endl;
	}
	return 0;
}
