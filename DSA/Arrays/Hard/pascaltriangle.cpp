// GIVEN THE ROW NUMBER, PRINT THAT PARTICULAR ROW FOR THE SAME!
// class Solution {
//     public:
//         vector<vector<int>> generate(int n) {
    
//             vector<vector<int>> result;
//             int ans =1;
//             result.push_back({ans});
//             for(int i =1;i<n;i++)
//             {
//                 ans = ans * (n-i);
//                 ans= ans/i;
//                 result.push_back({ans});
//             }
//             return result;
            
//         }
//     };

// GIVEN THE ROW AND COLUMN RETURN THE ELEMENT AT THAT PLACE!
// void NCR(n,r)
// {
//     result =1;
//     for(int i=0;i<r;i++)
//     {
//         result = result * (n-i);
//         result = result/(i+1);
//     }
//     return result;
// }

// GIVEN THE ROW NUMBER, PRINT THE PASCAL TRAINGLE TILL THAT NUMBER!    
// class Solution {
//     public:
//     vector<int> generateRow(int row)
//     {
//         vector<int> res;
//         int ans =1;
//         res.push_back(ans);
//         for(int i=1;i<row;i++)
//         {
//             ans = ans * (row-i);
//             ans= ans/i;
//             res.push_back(ans);
//         }
//         return res;
    
//     }
//         vector<vector<int>> generate(int n) {
//             vector<vector<int>> result;
//             for(int i=1;i<=n;i++)
//             {
//                 vector<int>temp = generateRow(i);
//                 result.push_back(temp);
//             }
//             return result;
            
            
//         }
//     };