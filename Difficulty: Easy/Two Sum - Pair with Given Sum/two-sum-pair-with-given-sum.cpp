class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
          
            int complement = target-arr[i];
            if(mp.find(complement)!=mp.end())
            {
                return true;
            }
            mp[arr[i]]=i;
        }
        return false;
    }
};