class Solution {
  public:
    int checkMirrorTree(int n, int e, int a[], int b[]) {
        // code here
        unordered_map<int,stack<int>> mp;
        for(int i=0;i<e*2;i+=2){
            mp[a[i]].push(a[i+1]);
        }
        for(int i=0;i<e*2;i+=2){
            if(mp[b[i]].top()!=b[i+1]){
                return 0;
            }
            mp[b[i]].pop();
        }
        return 1;
    }
};