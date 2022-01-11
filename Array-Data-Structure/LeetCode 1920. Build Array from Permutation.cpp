#include<bits/stdc++.h>

using namespace std;

int main()
{
     vector<int > result;
     vector<int > nums={1,2,3,4,0};

        int size=nums.size();
        for(int i=0;i<size;i++){
            result.push_back(nums[nums[i]]);
        //    cout<<nums[nums[i]]<<endl;
        }

}
