//Simple approach
//Time complexity: O(|s|*|s|)
//Space complexity: O(N)
class Solution {
  public:
    int smallestSubstring(string s) {
        int ans=INT_MAX;
        for(int i=0;i<s.length();i++){
            int a[3]={0};
            for(int j=i;j<s.length();j++){
                a[s[j]-'0']++;
                if(a[0]>=1 and a[1]>=1 and a[2]>=1){
                    ans=min(ans,j-i+1);
                    break;
                }
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};

class Solution {
  public:
    int smallestSubstring(string s) {
        int ans=INT_MAX;
        int a[3]={0};
        int j=0;
        for(int i=0;i<s.length();i++){
            a[s[i]-'0']++;
            if(a[0]>=1 and a[1]>=1 and a[2]>=1){
                int val=s[j]-'0';
                while(a[val]>1){
                    a[val]--;
                    j++;
                    val=s[j]-'0';
                }
                ans=min(ans,a[0]+a[1]+a[2]);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};

class Solution {
  public:
    int smallestSubstring(string S) {
        bool answerExist = false;
        int lastZero = -1, lastOne = -1, lastTwo = -1;
        int ans = S.size();
        for (int i = 0; i < S.size(); i++) {
            if (S[i] == '0') {
                lastZero = i;
            } else if (S[i] == '1') {
                lastOne = i;
            } else {
                lastTwo = i;
            }

            if (lastZero != -1 && lastOne != -1 && lastTwo != -1) {
                answerExist = true;
                ans = min(ans, 1 + i - min(lastZero, min(lastOne, lastTwo)));
            }
        }
        if (answerExist) {
            return ans;
        }
        return -1;
    }
};