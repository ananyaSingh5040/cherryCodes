// vector<int> findTwoElement(vector<int>& arr) {
//     // code here
//     int n = arr.size();
//     int hash[n+1]= {0};
//     for(int i =0;i<n;i++)
//     {
//         hash[arr[i]]++;
//     }
//     int missing = -1;
//     int repeat = -1;
//     for(int i =1;i<=n;i++)
//     {
//         if(hash[i]==2)
//         repeat = i;
//         else if(hash[i]==0 )
//         missing = i;
//     }
//     return{repeat,missing};
    
// }