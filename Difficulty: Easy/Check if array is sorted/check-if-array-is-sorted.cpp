class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        int i;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                return false;
            }
        }
        return true;
    }
};
