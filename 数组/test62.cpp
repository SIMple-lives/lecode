#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<std::vector<int>> dp(m, std::vector<int>(n, 0));//创建了m各长度为n的vector
        // 初始化边界条件
        for (int i = 0; i < m; i++) 
        {
            dp[i][0] = 1;
        }
        for (int j = 0; j < n; j++) 
        {
            dp[0][j] = 1;
        }

        // 计算路径数
        for (int i = 1; i < m; i++) 
        {
            for (int j = 1; j < n; j++) 
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[m-1][n-1];
    }
};