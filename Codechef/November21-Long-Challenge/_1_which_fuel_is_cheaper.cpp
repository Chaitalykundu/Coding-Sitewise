#include <iostream>
using namespace std;

int main() {
	// your code goes here
	 int t;
	 cin >> t;
	 
	 while(t--)
	 {
	     int x, y, a, b, k;
	     cin >> x >> y >> a >> b >> k ;
	     
	     int petrol , diesel ;
	     petrol = (a*k)+x;
	     diesel = (b*k)+y;
	     
	     if(petrol == diesel)
	        cout << "SAME PRICE"<< endl;
	     else if(petrol < diesel)
	        cout << "PETROL" << endl;
	     else
	        cout << "DIESEL" << endl;
	 }
	return 0;
}