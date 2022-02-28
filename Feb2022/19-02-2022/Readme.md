<h1>:heavy_check_mark: Find the number of islands  </h1>
<blockquote>Given a grid of size n*m (n is number of rows and m is number of columns grid has) consisting of '0's(Water) and '1's(Land). Find the number of islands.
Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.</blockquote>

* **Example 1**:<br>

        Input:
        grid = {{0,1},{1,0},{1,1},{1,0}}
        Output:
        1
        Explanation:
        The grid is-
        0 1
        1 0
        1 1
        1 0
        All lands are connected.

* **Example 2**:<br>

        Input:
        grid = {{0,1,1,1,0,0,0},{0,0,1,1,0,1,0}}
        Output:
        2
        Expanation:
        The grid is-
        0 1 1 1 0 0 0
        0 0 1 1 0 1 0 
        There are two islands one is colored in blue 
        and other in orange.

**➔ Your Task**

      You don't need to read or print anything. Your task is to complete the function numIslands() which takes grid as input parameter and returns the total number of islands.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N*M)</td> <td align="center">O(N*M)</td></tr>
</table>

### **Constraints** 
        1 ≤ n, m ≤ 500