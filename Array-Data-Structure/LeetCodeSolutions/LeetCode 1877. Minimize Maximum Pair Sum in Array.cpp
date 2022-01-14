
// To minimize max pair sum we need to sort the array  and pair the highest element with
// the lowest element
class Solution {
public:
    int minPairSum(vector<int>& nums) {
      sort(nums.begin(), nums.end());
      int size= nums.size();
      int max =-1;
    for(int i=0;i<size;i++){
        if(max<nums[i]+nums[size-1-i])
            max=nums[i]+nums[size-1-i];
    }
    return max;
    }

};
