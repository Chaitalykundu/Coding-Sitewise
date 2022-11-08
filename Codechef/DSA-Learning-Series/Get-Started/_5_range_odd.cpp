#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l,r,i;
	cin >> l >> r;
	
	for(i=l;i<=r;i++)
	{
	    if(i%2==1)
	        cout << i << " ";
	}
	cout << endl;
	return 0;
}
