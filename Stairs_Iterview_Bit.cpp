int Solution::climbStairs(int A) {
    if(A==1)
    return 1;
    if(A==2)
    return 2;
    int a[36];
    a[1]=1;a[2]=2;
    for(int i=3;i<=A;i++)
    a[i]=a[i-1]+a[i-2];
    return a[A-1]+a[A-2];
}
