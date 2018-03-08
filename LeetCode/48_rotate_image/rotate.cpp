class Solution {
public:
    
    void fourWaySwap(int& a, int& b, int& c, int& d) {
        int tmp = a;
        a = d;
        d = c;
        c = b;
        b = tmp;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int x = 0; x < n/2; x++) {
            for (int y = x; y < n-x-1; y++) {
                cout<<"AY"<<endl;
                fourWaySwap(matrix[x][y], matrix[y][n-x-1], matrix[n-x-1][n-y-1], matrix[n-y-1][x]);
            }
        }
    }
};