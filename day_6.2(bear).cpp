#include<bits/stdc++.h>

#define ll long long int
#define watch(x) cout << (#x) << " is " << (x) << endl  //watch function print variable and value for debugging
#define count_ones __builtin_popcountll                  // count_ones(9) is equal to 2 valid for ll also
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fo(i,n) for(ll i=0;i<n;i++)
using namespace std;
 
int main() {
 #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
 #endif
       fast_io
 
      int x,cnt=0; 
      cin>>x;
      int a[]={1,2,3,4,5};
      int i=4;
      while(x>0)
      {
        int val=x/a[i];
        n%=a[i];
        cnt+=val;
        i--;
      }
      cout<<cnt<<"\n";


   return 0;
 }