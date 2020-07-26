class Solution{
public:
    int maxArea(vector<int>& height){
        int left=0;
        int right=0;
        int ans=0;
        while(left<right){
            int area=min(height[left],height[right])*(right-left);
            ans=max(ans,area);
            if(height[left]<=height[right]){
                left++;
            }else{
                right--;
            }
        }
    }
};
