class Solution {
public:
    int pivot(vector<int>&nums,int n){
        int l=0,r=n;
        while(l<r){
            int m=l+(r-l)/2;
            if(nums[m]>nums[r]){
                l=m+1;
            }
            else{
                r=m;
            }
        }
        return r;
    }
    int binarysearch(int l,int r,vector<int>&nums,int target){
        int idx=-1;
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                idx=m;
                break;
            }
            else if(nums[m]>target){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        return idx;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int pivot_index=pivot(nums,n);
        int idx=binarysearch(0,pivot_index-1,nums,target);
        if(idx!=-1){
            return idx;
        }
        idx=binarysearch(pivot_index,n,nums,target);
        return idx;
    }
};