int minimumTotal(vector<vector<int> > &triangle) {
    int n = triangle.size();
    vector<int> dp(triangle.back());
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            dp[j] = min(dp[j], dp[j + 1]) + triangle[i][j];
        }
    }
    return dp[0];
}

int main () {

}

dp [4 1 8 3] 
dp [7 6 8 3] i = 2
dp [9 10 8 3] i = 1
dp [11 10 8 3 ] i = 0