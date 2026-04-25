//using bitmasking
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int>rowMap(9,0);
        vector<int>colMap(9,0);
        vector<int>gridMap(9,0);
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                //checking set bit of each vector and checking if the element is present there
                int val = board[i][j] - '1';
                int grid = (i/3)*3 + j/3;
                if(rowMap[i]&(1<<val) || colMap[j]&(1<<val) || gridMap[grid]&(1<<val)) return false;
                //to set a bit
                rowMap[i]|=(1<<val);
                colMap[j]|=(1<<val);
                gridMap[grid]|=(1<<val);
            }
        }
        return true;
    }
};
