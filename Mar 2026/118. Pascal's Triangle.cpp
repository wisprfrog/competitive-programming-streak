//URL: https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) return {{1}};
        if(numRows == 2) return {{1}, {1, 1}};
        
        vector<vector<int>> res = {{1}, {1, 1}};
        for(int i=3; i<=numRows; i++){
            res.push_back({1});

            int ultimo = res.size()-1;
            int anterior = ultimo-1;
            int tam_anterior = res[anterior].size();
            for(int j=0; j+1 < tam_anterior; j++){
                int suma = res[anterior][j] + res[anterior][j+1];
                res[ultimo].push_back(suma);
            }

            res[ultimo].push_back(1);
        }

        return res;
    }
};