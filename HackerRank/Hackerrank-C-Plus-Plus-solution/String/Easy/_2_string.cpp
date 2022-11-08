#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    
    string a, b;
    cin >> a >> b;  // string
    
    // find length
    int lena, lenb;
    lena = a.length();
    lenb = b.length();
    cout << lena << " " << lenb << endl;
     
    string str = a + b;
    cout << str << endl;
    
    
    swap(a[0],b[0]);
    
    cout << a << " " << b << endl;

    return 0;
}