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
 
      int a,b,c,d;
      cin>>a>>b>>c>>d;

      if(a+b==c+d || a+c==b+d || a+d==b+c || a+b+c==d || a+c+d==b || b+c+d==a || a+b+d==c)
        cout<<"YES"<<"\n";
      else
        cout<<"NO"<<"\n";


   return 0;
 }