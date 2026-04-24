//brute force -- using hashset
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //checking all rows
        for(int i=0; i<9; i++){
            unordered_set<char>set1;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                if(set1.find(board[i][j])!=set1.end()) return false;
                set1.insert(board[i][j]);
            }
        }
        //checking all columns
        for(int i=0; i<9; i++){
            unordered_set<char>set2;
            for(int j=0;j<9;j++){
                if(board[j][i]=='.') continue;
                if(set2.find(board[j][i])!=set2.end()) return false;
                set2.insert(board[j][i]);
            }
        }
        //checking all 3*3 grids
        for(int square=0; square<9; square++){
            unordered_set<int>set3;
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    int row = (square/3)*3 + i;
                    int col = (square%3)*3 + j;
                    if(board[row][col]=='.') continue;
                    if(set3.find(board[row][col])!=set3.end()) return false;
                    set3.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
