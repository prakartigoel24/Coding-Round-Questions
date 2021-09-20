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
	    int n;
	    cin>>n;
        vector<int> v1(n) , v2(n) ;
        
        for(auto &i: v1)
            cin>>i;
            
        for(auto &j :v2)
            cin>>j;
            
        int s=v1.size();
        
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(),greater<int>() );
        int ans=0;
        
        for(int i=0;i<s;i++)
        {
            ans+= (v1[i]*v2[i]);
        }
        
        cout<<ans;
	}
	return 0;
}
