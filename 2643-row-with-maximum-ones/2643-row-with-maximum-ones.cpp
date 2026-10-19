class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans={};
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            ans.push_back(count);
        }
        int largest=ans[0];
        int index=0;
        for(int i=1;i<ans.size();i++){
            if(ans[i]>largest){
                largest=ans[i];
                index=i;
            }
        }
        return {index,largest};
    }
};