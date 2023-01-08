//task 1 print the pattern like output
#include<bits/stdc++.h>
using namespace std;
int main () 
{
int n ;
cout<<"Enter the number of rows :"; 
cin>>n;
for(int i=1;i<=n;i++)
  {
  for(int j=0;j<n-i;j++)
  cout<<" ";
  for(int j=0;j<i;j++)
  cout<<"* ";
  cout<<"\n";
 }
 return 0;
}
// Output
// Enter the number of rows :5
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

//Task 2
//Find the smallest and second smallest element in an array

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int>minAnd2ndMin(int a[], int n) 
{
    sort(a,a+n);
    vector<int>v,x;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
          v.push_back(a[i]);
          v.push_back(a[i+1]);
          return v; 
        }
     }
   x.push_back(-1); 
   return x;
 }
