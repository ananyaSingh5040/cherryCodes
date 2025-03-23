//BRUTE
// class Solution {
//     public:
//         vector<int> majorityElement(vector<int>& nums) {
//             int n= nums.size();
//             int k = n/3;
//             vector<int> ans;
//             for(int i=0;i<n;i++)
//             {
//                 if(ans.size()==0 || ans[0]!=nums[i])
//                 {
//                 int count =0;
//                 for(int j=i;j<n;j++)
//                 {
//                     if(nums[j]==nums[i])
//                     {
//                         count++;
//                     }
                  
//                 }
//                 if(count>k)
//                 {
//                     ans.push_back(nums[i]);   
//                 }
//                 }
//                 if(ans.size()==2)
//                 break;
//             }
//             return ans;
            
//         }
//     };


//BETTER:
// class Solution {
//     public:
//         vector<int> majorityElement(vector<int>& nums) {
//             unordered_map<int,int> mpp;
//             int n = nums.size();
//             int mini = (n/3) + 1;
//             vector<int> ans;
//             for(int i=0;i<n;i++)
//             {
//                 mpp[nums[i]]++;
//                 if(mpp[nums[i]]==mini)
//                 {
//                     ans.push_back(nums[i]);
//                 }
//             }
//             return ans;
            
//         }
//     };