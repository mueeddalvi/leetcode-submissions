class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size(),c=board[0].size(),n=word.length();
        vector<vector<bool>>visited(r,vector<bool>(c,false));
        string res="";
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(word[0]==board[i][j] and dfs(board,word,i,j,0))
                    return true;
            }
        }
        return false;
        
    }
    
   bool dfs(vector<vector<char>>& board, string& word, int i, int j, int index)
   {
        if(index==word.length())
            return true;
       if(i<0 or i>=board.size() or j<0 or j>=board[0].size() or
          board[i][j]!=word[index]) return false;
       if(board[i][j]==word[index++])
       {
           char c=board[i][j];
           board[i][j]='*';
           bool res= dfs(board,word,i+1,j,index) or dfs(board,word,i-1,j,index)
                    or dfs(board,word,i,j+1,index) or dfs(board,word,i,j-1,index);
           board[i][j]=c;
           return res;
       }
       
       return false;
   }
};
