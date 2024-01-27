int maxSatisfaction(vector<int>& s){
    int ans=0,c=0;
    vector<int> p;
    vector<int> n;
    for(int i=0;i<s.size();i++){
        if(s[i]>=0) p.push_back(s[i]);
        else n.push_back(s[i]);
    }
    sort(p.begin(),p.end());
    sort(n.begin(),n.end(),greater<int>());
    for(int i=0;i<p.size();i++){
        ans+=(p[i]*(i+1));
        c+=p[i];
    }
    for(int i=0;i<n.size();i++){
        if((n[i]*(-1))<=c){
            ans+=(c+n[i]);
            c+=n[i];
        }
        else break;
    }
    return ans;
}
