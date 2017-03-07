//https://leetcode.com/problems/island-perimeter/?tab=Description
//网吧时间可能不够，先写个思路：每一个island块所自带的边长属性，被上下左右四个块的情况所约束。
//因此最直接的思路，当然是对每个方块判断是否island，若是则判断是哪类，并把它的边长加到总的上面。

int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int i,j,result;
    result=0;

    for(i=0;i<gridRowSize;i++)
    {
        for(j=0;j<gridColSize;j++)
        {
            if(grid[i][j] ==1)
            {
                result = result + grid[i][j]*4;       
                if(j!=0 && (grid[i][j-1]==1))
                    result -=1;
                if(j!=(gridColSize-1) && (grid[i][j+1]==1))   
                    result -=1;
                if(i!=0 && (grid[i-1][j]==1))
                    result -=1;
                if(i!=(gridRowSize-1) && (grid[i][j+1]==1))
                    result -=1;            
            }
        }
    }
        return result;
    
}
