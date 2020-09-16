#include<bits/stdc++.h>
#include<string>
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
       
       string strs;
       int count=0,i;
       getline(cin,strs);
       // int l=strlen(strs);
       for(i=0;strs[i]!='\0';i++)
       {
       	if(strs[i]==' ' || strs[i]==',' || strs[i]=='.' && strs[i+1]!='\0')
       		count++;
       }
       cout<<count+1;

   return 0;
 }