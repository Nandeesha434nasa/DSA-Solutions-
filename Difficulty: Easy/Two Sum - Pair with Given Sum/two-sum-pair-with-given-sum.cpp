class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n =arr.size();
        //Brute force O(n^2) and O(n)
        /* for( int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum=arr[i]+arr[j];
                if(sum==target)
                {
                    
                    return true;
                }
            }
        }
        
        return false; */
        
        /*sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        while(i<j)
        {
            int sum=arr[i]+arr[j];
            if(sum>target)
            {
                j--;
            }
            
            else if(sum<target)
            {
                i++;
            }
            else
            return true;
        }
        return false;  */
        //Optimal solution O(n) and O(n)
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int complement = target - arr[i];
            if(mp.count(complement))  // mp.find(complement)!=mp.end() same like this but it will return count 1/0 to if condition.
            {
                return true;
            }
            mp[arr[i]]=i;
        }
        return false; 
    }
};