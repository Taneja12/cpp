/*

To solve this problem of finding the maximum sum of coins in any
𝐾×𝐾 sub-grid within an N×N grid, we’ll use the prefix sum array method.
This technique allows us to compute sub-grid sums quickly, making our
solution efficient.


prefix[i][j]=mat[i−1][j−1]+prefix[i−1][j]+prefix[i][j−1]−prefix[i−1][j−1]

where:

mat[i-1][j-1] is the value at the current cell.
prefix[i-1][j] is the sum of all elements in the rectangle above (i, j).
prefix[i][j-1] is the sum of all elements in the rectangle to the left of (i, j).
prefix[i-1][j-1] is subtracted because it’s added twice (once in each of
prefix[i-1][j] and prefix[i][j-1]).


exampleques c++ folder Maximum_Sum.cpp
*/