// class Solution {
//     public:
//         vector<int> twoSum(vector<int>& nums, int target) {
    
//           map<int,int> mpp;
//           for(int i=0;i<nums.size();i++)
//           {
//             int a = nums[i];
//             int restSum = target-a;
//             if(mpp.find(restSum)!=mpp.end())
//             {
//                 return {mpp[restSum],i};
//             }
//             mpp[a]=i;
//           }
//           return {-1,-1};
            
//         }
//     };