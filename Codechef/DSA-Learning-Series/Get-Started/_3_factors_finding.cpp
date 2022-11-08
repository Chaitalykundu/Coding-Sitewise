#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N, i, count=0, factor;
	cin >> N;
	for(i=1;i<=N;i++)
	{
	    if(N%i==0)
	    count++;
	}
	cout << count << endl;
	for(i=1;i<=N;i++)
	{
	    if(N%i==0)
	        cout << i << " ";
	}
	cout << endl;
	return 0;
}
