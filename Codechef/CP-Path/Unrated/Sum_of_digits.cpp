// Question Link:  https://www.codechef.com/LP0TO101/problems/FLOW006

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        int r;
        while(n!=0)
        {
            r = n%10;
            sum+= r;
            n /= 10;
        }

        cout<<sum<<endl;
    }

    return 0;
}
