Question:- https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/

class Solution {
public:
    int minChanges(string s) {
        int ans=0;
        int n=s.size(), i=0;
        while(i<n)
        {
            int j=i+1;
            
            while(j<n && s[i]==s[j])
            {
                j++;
            }
            // cout<<j<<"j\n";
            int sz = j-i;
            if(sz%2 == 0)
            {
                i=j;
            }
            else
            {
                s[j]=((s[i]=='0')?'1':'0');
                ans++;
                i=j+1;
            }
                
        }
        // cout<<"\n";
        
        return ans;
    }
};
