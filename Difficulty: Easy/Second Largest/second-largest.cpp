class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        /*// code here
        int n=arr.size();
        sort(arr.begin(), arr.end());
        if(arr[n-2]==arr[n-1])
        {
            return -1;
        }
        else return arr[n-2];
    }*/
    int i;
    int n=arr.size();
    int second_largest = -1;
    int largest=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        if(arr[i]>second_largest && arr[i]!=largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
    }
};