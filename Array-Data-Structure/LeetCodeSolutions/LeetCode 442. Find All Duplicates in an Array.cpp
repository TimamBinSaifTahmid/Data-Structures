class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int array[n+1];
        for(int i=0;i<n+1;i++)
            array[i]=0;
        vector<int> result;
        for(int i=0;i<n;i++){
            array[nums[i]]++;
            if(array[nums[i]]==2)
                result.push_back(nums[i]);
        }
        return result;
    }
};
