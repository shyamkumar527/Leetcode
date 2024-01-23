//POTD 23-1
int leng(vector<string>& arr,vector<string>& v,int ind){
    if(ind>=arr.size()) return 0;
    v.push_back(arr[ind]);
    map<char,int> mp;
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++) mp[v[i][j]]++;
    }
    bool f=true;
    int ans1=0,ans2=0;
    for(auto it:mp){
        if(it.second>1){
            f=false;
            break;
        }
    }
    if(f) ans1=arr[ind].size()+leng(arr,v,ind+1);
    v.pop_back();
    ans2=leng(arr,v,ind+1);
    return max(ans1,ans2);
}
int maxLength(vector<string>& arr) {
    vector<string> v;
    return leng(arr,v,0);
}
