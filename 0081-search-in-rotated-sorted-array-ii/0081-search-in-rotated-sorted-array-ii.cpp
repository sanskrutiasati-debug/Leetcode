class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
        int l=0,r=nums.size()-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                return true;
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return false;
    }
};