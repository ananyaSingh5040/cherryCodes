// int findMaxConsecutiveOnes(vector<int>& nums) {

//     int count =0;
//     int maxi= 0;
//     int n = nums.size();
//     for(int i=0;i<n;i++)
//     {
//         if(nums[i]!=1)
//         {
//             maxi= max(maxi,count);
//             count=0;
           
//         }
        
//         else
//         {
           
//             count++;
//         }
//         maxi= max(maxi,count);
//     }
//     return maxi;