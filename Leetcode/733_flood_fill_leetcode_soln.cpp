/*
An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].
To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.
Return the modified image after performing the flood fill.
*/

class Solution {
public:
    void floodfill(vector<vector<int>> &image, int sr, int sc, int color) {
        int temp = image[sr][sc];
        image[sr][sc] = color;
        if(sr!=0 && image[sr-1][sc] == temp) floodfill(image,sr-1,sc,color);
        if(sc!=0 && image[sr][sc-1] == temp) floodfill(image,sr,sc-1,color);
        if(sr!=image.size()-1 && image[sr+1][sc] == temp) floodfill(image,sr+1,sc,color);
        if(sc!=image[0].size()-1 && image[sr][sc+1] == temp) floodfill(image,sr,sc+1,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] == color) return image;
        floodfill(image,sr,sc,color);
        return image;
    }
};

/*
SAMPLE INPUT : 
[[1,1,1],[1,1,0],[1,0,1]]
1
1
2
[[0,0,0],[0,0,0]]
0
0
0
SAMPLE OUTPUT : 
[[2,2,2],[2,2,0],[2,0,1]]
[[0,0,0],[0,0,0]]
*/
