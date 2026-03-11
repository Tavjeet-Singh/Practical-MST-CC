class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int total=nums[i];
            for(int j=i+1;j<n;j++){
                total+=nums[j];
                if(total%k==0){
                    return true;
                }
            }
        }
        return false;
    }
};
