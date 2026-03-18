//URL: https://leetcode.com/problems/n-th-tribonacci-number/

class Solution {
public:
    int tribonacci(int n) {
        int memo[] = {0, 1, 1};

        if(n <= 2) return memo[n];

        for(int i=3; i<=n; i++){
            int suma = 0;
            for(int j=0; j<3; j++) suma += memo[j];

            memo[0] = memo[1];
            memo[1] = memo[2];
            memo[2] = suma;
        }

        return memo[2];
    }
};