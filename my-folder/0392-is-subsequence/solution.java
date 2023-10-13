class Solution {
    static int t[][];
	public int recur(String x, int n, String y, int m){
	    if(n==0||m==0){
	        return t[n][m]=0;
	    }
	    else if(t[n][m]!=-1){
	        return t[n][m];
	    }
	    else if(x.charAt(n-1)==y.charAt(m-1)){
	        return t[n][m]=1+recur(x,n-1,y,m-1);
	    }
	    else{
	        return t[n][m]=Math.max(recur(x,n-1,y,m),recur(x,n,y,m-1));
	    }
	}
    public boolean isSubsequence(String x, String y) {

        int n=x.length(),m=y.length();
        t=new int[n+1][m+1];
	    for(int i=0;i<n+1;i++)
	        for(int j=0;j<m+1;j++)
	            t[i][j]=-1;
        int res=recur(x,n,y,m);
        System.out.println(res+" "+m);
        
        return res==n?true:false;
        
    }
}
