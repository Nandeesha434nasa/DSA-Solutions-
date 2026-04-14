class Solution {
public:
    int maxArea(vector<int>& height) {
        
        /*
        int area=0;
        int n = height.size();
        for( int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int b = j-i;
                int l = min(height[i],height[j]);
                int ans = b*l;
                area = max(area,ans);
            }
        }
        return area;
        */
        int i=0;
        int j=height.size()-1;
        long long area = 0;
        while(i<j)
        {
            int b = j-i;
            int h = min(height[i],height[j]);
            long long ans = (long long) b*h;
            area = max(area,ans);
            if(height[i]<height[j]) i++;
            else j--; 
        }
        return area;
    }
};