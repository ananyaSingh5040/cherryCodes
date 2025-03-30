int waysToReachStair(int k) {
    if(k<0)
    return 0;
    if(k==0)
    return 1;

    //recursive relation:
    int ans =  waysToReachStair(k-1) + waysToReachStair(k-2);
    return ans;
    
}