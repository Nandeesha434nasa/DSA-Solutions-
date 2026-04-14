class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        /*
        O(n)^3 Brute force 
        set<vector<int>> st;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                { 
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int> temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);                    }           
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end()); 
        */
        
        /*
        int index=0;
        set<vector<int>> st;
        for(int i=0;i<n;i++)
        {
            unordered_map<int,int> mp;
            for(int j=i+1;j<n;j++)
            {
                vector<int> temp;
                int complement=-(nums[i]+nums[j]);
                if(mp.find(complement)!=mp.end())
                {
                    temp = {nums[i],nums[j],complement};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);                   
                }
                mp[nums[j]] = 1;
                else
                {
                    mp[nums[j]]=index;
                    index++;
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end()); 
        */
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++; k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(k>j && nums[k]==nums[k+1]) k--;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        return ans;
    }
};
