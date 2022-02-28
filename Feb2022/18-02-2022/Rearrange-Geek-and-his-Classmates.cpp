//Using hashmap
//Time complexity: O(N)
//Space complexity: O(N)
class Solution {
  public:
    void prank(long long a[], int n){
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[i]=a[a[i]];
        }
        for(int i=0;i<n;i++){
            a[i]=mp[i];
        }
    }
};


//Time complexity: O(N)
//Space complexity: O(1)
class Solution {
  public:
    void prank(long long a[], int n){
        for(int i=0;i<n;i++){
            a[i]+=(a[a[i]]%n)*n;
        }
        for(int i=0;i<n;i++){
            a[i]/=n;
        }
    }
};