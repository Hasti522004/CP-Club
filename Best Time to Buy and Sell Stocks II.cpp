int Solution::maxProfit(const vector<int> &A) {
    long long profit=0;
    if(A.size()<=0){
        return 0;
    }
    for(int i=0;i<A.size()-1;i++){
        if(A[i]<A[i+1]){
            profit=profit+(A[i+1]-A[i]);     
        }
    }
    return profit;
}
