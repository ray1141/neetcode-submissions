//one pass
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>>rowMap;
        unordered_map<int,unordered_set<char>>colMap;
        map<pair<int,int>, unordered_set<char>>gridMap;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                int gridRow = i/3;
                int gridCol = j/3;
                if(rowMap[i].find(board[i][j])!=rowMap[i].end() || colMap[j].find(board[i][j])!=colMap[j].end() || gridMap[{gridRow,gridCol}].find(board[i][j])!=gridMap[{gridRow,gridCol}].end()) return false;
                rowMap[i].insert(board[i][j]);
                colMap[j].insert(board[i][j]);
                gridMap[{gridRow,gridCol}].insert(board[i][j]);
            }
        }
        return true;
    }
};
