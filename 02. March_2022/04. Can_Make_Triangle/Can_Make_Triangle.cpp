//Time complexity: O(N)
//Space complexity: O(N)
class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> a, int n){
        vector<int> result;
        for(int i=0;i<n-2;i++){
            vector<int> v={a[i],a[i+1],a[i+2]};
            sort(v.begin(),v.end());
            if(v[0]+v[1]>v[2]){
                result.push_back(1);
            }
            else{
                result.push_back(0);
            }
        }
        return result;
    }
}; 

//Time complexity: O(N)
//Space complexity: O(1)
class Solution{
    public:
    vector<int> canMakeTriangle(vector<int> a, int n){
        vector<int> result;
        for(int i=0;i<n-2;i++){
            if(a[i]+a[i+1]>a[i+2] && a[i+1]+a[i+2]>a[i] && a[i]+a[i+2]>a[i+1]){
                result.push_back(1);
            }
            else{
                result.push_back(0);
            }
        }
        return result;
    }
}; 