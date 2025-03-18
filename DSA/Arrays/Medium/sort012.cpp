// class Solution {
//     public:
//         void sortColors(vector<int>& nums) {
            
//             int count0 = 0;
//             int count1 = 0;
//             int count2 = 0;
//             for(int i =0;i<nums.size();i++)
//             {
//                 if(nums[i]==1)
//                 count1++;
//                 else if(nums[i]==2)
//                 count2++;
//                 else
//                 count0++;
                
//             }
//             for(int i=0;i<count0;i++)
//             {
//                 nums[i]=0;
//             }
                //idhar count 0 se iskelie start marrenge cuz uske pehle se 0 placed hai.
//             for(int i=count0;i<count0+count1;i++)
//             {
//                 nums[i]=1;
//             }
//             for(int i=count0+count1;i<nums.size();i++)
//             {
//                 nums[i]=2;
//             }
            
//         }
//     };