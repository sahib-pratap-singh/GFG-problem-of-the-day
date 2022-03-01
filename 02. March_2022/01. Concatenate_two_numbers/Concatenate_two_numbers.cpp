class Solution{
    public:
    long long countPairs(int N, int X, vector<int> numbers){
        string s=to_string(X);
        unordered_map<string,int> mp;
        for(auto x:numbers){
            mp[to_string(x)]++;
        }
        long long ans=0;
        for(int i=0;i+1<s.size();i++){
            string cur=s.substr(0,i+1);
            string next=s.substr(i+1);
            if(cur==next){
                ans+=(mp[cur]*(mp[next]-1));
            }
            else{
                ans+=(mp[cur]*mp[next]);
            }
        }
        return ans;
    }
}; 