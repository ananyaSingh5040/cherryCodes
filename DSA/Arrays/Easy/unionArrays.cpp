// vector<int> findUnion(vector<int> &a, vector<int> &b) {
//     // Your code here
//     // return vector with correct order of elements
//     vector<int> result;
//    int i=0;
//    int j=0;
//    int n1= a.size();
//    int n2= b.size();
//    while(i<n1 && j<n2)
//    {
//        if(a[i]<=b[j])
//        {
//            if(result.size()==0 || result.back()!=a[i])
//            result.push_back(a[i]);
//            i++;
//        }
//        else
//        {
//             if(result.size()==0 || result.back()!=b[j])
//            result.push_back(b[j]);
//            j++;
//        }
       
//    }
//    while(i<n1)
//    {
      
       
//            if(result.size()==0 || result.back()!=a[i])
//            result.push_back(a[i]);
//            i++;
       
//    }
//    while(j<n2)
//    {
//        if(result.size()==0 || result.back()!=b[j])
//            result.push_back(b[j]);
//            j++;
//    }
//    return result;
// }