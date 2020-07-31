
public class MinPathSum {

    public int minPathSum (int[][] grid) {
        // write code here
        int wlen=grid.length;
        int nlen=grid[0].length;
        if(wlen==0 || nlen==0){
            return 0;
        }

        for(int i=1;i<wlen;i++){
            grid[i][0]+=grid[i-1][0];
        }
        for(int i=1;i<nlen;i++){
            grid[0][i]+=grid[0][i-1];
        }
        for(int i=1;i<wlen;i++){
            for(int j=1;j<nlen;j++){
                grid[i][j]+=Math.min(grid[i-1][j],grid[i][j-1]);
            }
        }
        return grid[wlen-1][nlen-1];
    }
}
