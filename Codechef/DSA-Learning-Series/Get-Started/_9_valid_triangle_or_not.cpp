#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin >> a >> b >> c;
	

	if((a+b<=c)|| (a+c<=b) || (b+c<=a))
	    cout << "NO" << endl;
	else
	    cout << "YES" << endl;
	return 0;
}