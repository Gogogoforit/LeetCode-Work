class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        //如果加上这个判断条件，在输入空数组的时候就会报如题错误
        //所以要对各种情况考虑周全
        if(grid.size()<1 || grid[0].size()<1)
            return 0;
        
        int count = 0;
        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j] == '1') {
                    count++;
                    search(grid,i,j);
                }
            }
        }
        return count;
    }
        
        
        
   void search(vector<vector<char>>& grid,int x,int y)
   {
       
       if(x<0|| x>=grid.size() ||y<0||y>=grid[0].size() ||grid[x][y]!='1')
           return;
       
        grid[x][y] = '0';//visited;
        search(grid,x-1,y);
        search(grid,x+1,y);
        search(grid,x,y-1);
        search(grid,x,y+1);
    }
};
