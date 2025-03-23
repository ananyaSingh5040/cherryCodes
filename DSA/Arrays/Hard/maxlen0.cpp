//BRUTE:
// class Solution {
//     public:
//       int maxLen(vector<int>& arr) {
          
//           int n = arr.size();
//           int maxlen = 0;
//           int count =0;
//           for(int i =0;i<n;i++)
//           {
//               int sum =0;
            
//               for(int j = i; j<n;j++)
//               {
//                   sum+=arr[j];
//                   count = j - i+1 ;
//                   if(sum==0)
//                   maxlen= max(maxlen,count);
                  
//               }
//           }
//           return maxlen;
//       }
//   };