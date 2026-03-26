class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int n =arr.size();
        int i=0,sum=0,maxi=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(mp.find(sum)!=mp.end())
            {
                maxi=max(maxi,i-mp[sum]);
            }
            else
            {
                mp[sum]=i;
            }
        }
        return maxi;
    }
};
