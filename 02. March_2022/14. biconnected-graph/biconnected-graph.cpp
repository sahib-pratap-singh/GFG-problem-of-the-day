class Solution {
  public:
    int biGraph(int arr[], int n, int e) {
        int dp[n]={0};
        
        //Special case where number of vertices are two and they are connected.
        if(e==1 && n==2)
        {
            return 1;
        }
        
        int n_e = 2*e;
        for(int i=0; i<n_e; i+=2)
        {
            dp[arr[i]]++;
            dp[arr[i+1]]++;
        }
        
        for(int i=0; i<n; i++)
        {
            if(dp[i]<2) return 0;
        }
        
        return 1;
    }
};