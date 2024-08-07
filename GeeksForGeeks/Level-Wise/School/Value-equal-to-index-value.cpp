/*
Author : Chaitaly Kundu
Date : 27-06-2024

Problem name : Value equal to index value
Level : School
Avg Time : 2m 51s

Problem link :
https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&difficulty=School&sortBy=submissions


Purpose : Crack Amazon interview

Company tag : Flipkart, Amazon, FactSet, Hike
Topic tag : Arrays, Searching, Data Structures, Algorithms

Process : Loop
T.C = O(n)
*/


#include<bits/stdc++.h>

using namespace std;


class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1)
	            v.push_back(i+1);
	    }
	    return v;
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
