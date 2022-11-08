#include <iostream>
using namespace std;

int find(int a[], int n, int k)
{
    int i;
    for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        return 1;
	        break;
	    }
	}
	return -1;
}


int main() {
	// your code goes here
	int n,k;
	cin >> n >> k;
	
	int a[n], i;
	for(i=0;i<n;i++)
        cin >> a[i];

	cout << find(a,n,k) << endl;
	return 0;
}