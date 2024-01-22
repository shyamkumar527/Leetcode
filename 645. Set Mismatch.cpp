//POTD - 22/01
vector<int> findErrorNums(vector<int>& nums) {
    vector<int> v;
    map<int,int> mp;
    int ans;
    for(int i=0;i<nums.size();i++) mp[nums[i]]++;
    for(int i=1;i<=nums.size();i++){
        if(mp[i]>1) v.push_back(i);
        if(mp[i]==0) ans=i;
    }
    v.push_back(ans);
    return v;
}
