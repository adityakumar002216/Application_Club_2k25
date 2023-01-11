//Remove vowel from string
{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{ 
	     vector<char> st = {'a', 'e', 'i', 'o','u','A', 'E', 'I', 'O', 'U'};
	    for (int i = 0; i < S.length(); i++)
    {
        if (find(st.begin(), st.end(),S[i]) != st.end())
        {
            S = S.replace(i, 1, "");
            i -= 1;
        }
    }
    return S;
}
	
};
