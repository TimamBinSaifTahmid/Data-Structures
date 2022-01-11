class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int size=nums.size();
        for(int i=0;i<size*2;i++){
            if(i>=size){
                result.push_back(nums[i-size]);
            }
            else result.push_back(nums[i]);
        }
        return result;
    }
};
