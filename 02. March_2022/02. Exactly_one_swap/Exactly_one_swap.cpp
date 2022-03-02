class Solution
{
public:
    long long countStrings(string S)
    {
        int n=S.length();
        unordered_map<char,int> mp;
        for(auto x:S){
            mp[x]++;
        }
        long long ans=0;
        bool isdupli=false;
        for(auto x:S){
            ans+=n-mp[x];
            if(mp[x]>1)
                isdupli=true;
        }
        ans/=2;
        if(isdupli)
            ans++;
        return ans;
        
    }
};