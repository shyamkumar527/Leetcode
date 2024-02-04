//POTD - 4/2/24
string minWindow(string s, string t) {
    int l=0;
    string x,ans;
    map<char,int> mps;
    map<char,int> mpt;
    for(int i=0;i<t.size();i++) mpt[t[i]]++;
    for(int i=0;i<s.size();i++){
        x+=s[i];
        if(mpt[s[i]]>0){
            mps[s[i]]++;
            int f=1;
            for(auto it:mpt){
                if(it.second>mps[it.first]){
                    f=0;
                    break;
                }
            }
            if(f){
                if(ans=="") ans=x;
                else{
                    if(x.size()<ans.size()) ans=x;
                }
                while(1){
                    if(mpt[x[0]]<1 or mpt[x[0]]<mps[x[0]]){
                        if(mps[x[0]]>0) mps[x[0]]--;
                        x.erase(0,1);
                        if(x.size()<ans.size()) ans=x;
                    }
                    else break;
                }
            }
        }
    }
    return ans;
}
