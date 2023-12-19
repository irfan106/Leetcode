class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>>res=img;
        int n=img.size(), m=img[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int avg=0,c=0;
                for(int x=max(i-1,0);x<min(i+2,n);x++){
                    for(int y=max(j-1,0);y<min(j+2,m);y++){
                        avg+=img[x][y];
                        c++;
                    }
                }
                res[i][j]=avg/c;
            }
        }
        return res;
    }
};