class Solution {
  public:
    int mostBalloons(int N, pair<int, int> arr[]) {
       int ans = 0;
       for(int i = 0; i < N; i++){
           int cnt = 0;
           unordered_map<double,int> mp;
           for(int j = 0; j < N; j++){
               if(arr[j].first == arr[i].first && arr[j].second == arr[i].second){
                   cnt++;
                   continue;
               }
               else{
                   double slope = (double)(arr[j].second-arr[i].second) / (double)(arr[j].first-arr[i].first);
                   mp[slope]++;
               }
           }
           
           for(auto x: mp){
               ans = max(ans,x.second+cnt);
           }
       }
       
       return (ans);
   }
};