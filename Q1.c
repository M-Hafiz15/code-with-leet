int dp[1000];

int solve(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    if (dp[n] != -1) return dp[n];
    dp[n] = solve(n-1) + solve(n-2);
    return dp[n];
}

int climbStairs(int n) {
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int climbStairsOptimized(int n) {
    int prev2 = 1, prev1 = 1, cur;
    for(int i = 2; i <= n; i++) {
        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
}
