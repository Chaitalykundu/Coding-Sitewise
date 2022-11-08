// Question link : https://www.codechef.com/LP0TO101/problems/FLOW007

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int d, rev=0;
        int n;
        cin >> n;
        while(n>0){
            d = n%10;
            rev=rev*10 + d;
            n/=10;
        }
        cout<<rev<<endl;
    }


    return 0;
}
