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
 
      ll t;
      cin>>t;
      while(t--)
      {
        ll n;
        cin>>n;
        
        int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string roman[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;

        while(n>0)
        {
          int d=n/num[i];
          n%=num[i];
          while(d--)
          {
            cout<<roman[i];
          }
          i--;
        }
      	cout<<"\n";
      }

   return 0;
 }
