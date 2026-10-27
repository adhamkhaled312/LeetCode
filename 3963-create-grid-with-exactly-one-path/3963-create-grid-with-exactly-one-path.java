class Solution {
    public String[] createGrid(int m, int n) {
        String[] ret = new String[m];
        for(int i=0;i<m;i++){
            char[] temp = new char[n];
            Arrays.fill(temp,'#');
            if(i==0) Arrays.fill(temp,'.');
            else{
                temp[n-1]='.';
            }
            ret[i]=new String(temp);

        }
        return ret;
    }
}