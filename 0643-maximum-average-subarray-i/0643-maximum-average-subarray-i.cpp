class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n =nums.size();
        /* T.C  O(nk) → O(n²) where k is the number of times inner loop runs
        double avg = 0;
        double maxi = INT_MIN;
        for(int i=0;i<=n-k;i++)
        {
            double sum = 0;
            for(int j=i;j<i+k;j++)
            {
                sum += nums[j];
            }
            avg = sum/k;
            maxi = max(avg,maxi);
        }
        return maxi;
        */
        double sum = 0;
        double maxi = INT_MIN;
        for(int j=0;j<k;j++)
        {
            sum+=nums[j];        
        }
            maxi = sum;
        for(int i=k;i<n;i++)
        {
            sum+= nums[i] - nums[i-k];
            maxi = max(maxi,sum);
        }
        return maxi/k;
    }
};