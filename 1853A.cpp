#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<long long>& nums){
    bool sorted=true;
    for(int i=0;i<nums.size()-1;++i){
        if(nums[i]>nums[i+1]) sorted=false;
    }
    return sorted;
}
int minGap(vector<long long>& nums){
    int best=1e3;
    for(int i=0;i<nums.size()-1;++i){
        if(best>nums[i+1]-nums[i]){
            best=nums[i+1]-nums[i];
        }
    }
    if(best==0) best++;
    return best;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;++i) cin>>v[i];
        if(!(checkSorted(v))) cout<<0<<'\n';
        else{
            int ans=minGap(v)/2;
            cout<<ans+1<<'\n';
        }
    }
}

// not done yet , wrong answer , failed test case 2;