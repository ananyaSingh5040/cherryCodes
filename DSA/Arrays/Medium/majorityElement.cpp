// MOORE's ALGORITHM
// class Solution {
//     public:
//         int majorityElement(vector<int>& nums) {
    
//             int count =0;
//             int element=nums[0];
//             for(int i=0;i<nums.size();i++)
//             {
//                 if(count==0)
//                 {
//                     count=1;
//                     element= nums[i];
//                 }
//                 else if(nums[i]==element)
//                 {
//                     count++;
//                 }
//                 else
//                 {
//                     count--;
//                 }
//             }
//             return element;
            
//         }
//     };