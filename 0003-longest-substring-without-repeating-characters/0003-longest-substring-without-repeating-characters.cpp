class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        /*
        int maxi = INT_MIN;
        if(s.size()==0)
        {
            maxi = 0;
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int cnt =  0;                       
            mp.clear();
            for(int j=i;j<n;j++)
            {
                if(mp.find(s[j])!=mp.end())
                {
                    cnt = 0;
                }
                else
                {
                    mp[s[j]]++;
                    cnt++;
                    maxi=max(maxi,cnt);
                }
            
            }
        }
        return maxi;
        */
        int left = 0;
        int right = 0;
        int maxi = 0;
        unordered_map<char,int> mp;
            while(right<n)
            {
                if(mp.find(s[right])!=mp.end())
                {
                    while(mp.find(s[right])!=mp.end())
                    {
                        mp.erase(s[left]);
                        left++;
                    }
                }
                mp[s[right]]=1;
                maxi = max(maxi,right-left+1);
                right++;
            }
        return maxi;
    }
};