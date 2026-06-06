#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& v){
	vector<vector<int>> subsets;
	int t=(1<<v.size());
	for(int i=0;i<t;++i){
		vector<int> subset;
		for(int j=0;j<v.size();++j){
			if(i & (1<<j)) subset.push_back(v[j]);
		}
		subsets.push_back(subset);
	}
	return subsets;
}

int gcd(int a,int b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}

int main(){
	// int n;
	// cin>>n;
	// vector<int>v(n);
	// for(int i=0;i<n;i++) cin>>v[i];

	// vector<vector<int>>allSubset=subsets(v);
	// for(auto set: allSubset){
	// 	for(int ele: set){
	// 		cout<<ele<<' ';
	// 	}
	// 	cout<<'\n';
	// }
    cout<<gcd(8,12)<<'\n';
    cout<<gcd(16,640);

}