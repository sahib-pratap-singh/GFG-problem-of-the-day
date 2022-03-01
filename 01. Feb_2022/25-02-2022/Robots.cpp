class Solution{   
public:
    string moveRobots(string s1, string s2){
        if (s1.length() != s2.length()) return "No";
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == 'A') cnt1++;
            if (s2[i] == 'A') cnt1--; 
            if (s1[i] == 'B') cnt2--;
            if (s2[i] == 'B') cnt2++;
            if (cnt1 > 0 || cnt2 > 0 || (cnt2 < 0 && cnt1 < 0)) return "No";
        }
        return "Yes";
    }
};