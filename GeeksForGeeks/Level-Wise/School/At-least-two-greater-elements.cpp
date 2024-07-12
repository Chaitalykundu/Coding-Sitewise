/*
Author : Chaitaly Kundu
Date : 12-07-2024

Problem name : At least two greater elements
Level : School
Avg Time : 1m

Problem link :
https://www.geeksforgeeks.org/problems/at-least-two-greater-elements4625/1?page=1&company=Amazon&difficulty=School&sortBy=submissions

Purpose : Crack Amazon interview

Company tag : Amazon
Topic tag : Arrays, Sorting, Data Structures, Algorithms

Process : Loop
T.C = O(n)
*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here   
        
        vector<int>v;
        sort(a,a+n);
        
        for(int i=0;i<n-2;i++){
            v.push_back(a[i]);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        Solution ob;
        vector <int> res = ob.findElements(a,n);
        
        for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
}
// } Driver Code Ends
