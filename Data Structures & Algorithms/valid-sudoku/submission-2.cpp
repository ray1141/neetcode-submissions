//one pass
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>>rowMap;
        unordered_map<int,unordered_set<char>>colMap;
        unordered_map<int, unordered_set<char>>gridMap;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.') continue;
                char val = board[i][j];
                int grid = (i/3)*3 + j/3;
                if(rowMap[i].find(val)!=rowMap[i].end() || colMap[j].find(val)!=colMap[j].end() || gridMap[grid].find(val)!=gridMap[grid].end()) return false;
                rowMap[i].insert(val);
                colMap[j].insert(val);
                gridMap[grid].insert(val);
            }
        }
        return true;
    }
};
