#include <bits/stdc++.h>
#define lli long long int 
#define pb push_back
#define umap unordered_map

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	lli t;
    cin>>t;
    
	while(t--){
	    int s , n;
	    cin>>s>>n;
	    int diff=2*n;
	    std::vector<int> v(s) ;
	    
	    for(auto &i: v)
	        cin>>i;
	       
	   sort(v.begin(), v.end(),greater<int>());
	   
	   int i=0, j=1;
	   while(i<s && j<s)
	   {
	       if(v[i]-v[j] == diff)
	       {
	            cout<<"("<<v[i]<<","<<v[j]<<")"<<" ";
	            i++,j++;
	       }
	            
	       else if(v[i]-v[j] < diff)
	            j++;
	       else
	            i++;
	   }
	}
	return 0;
}
