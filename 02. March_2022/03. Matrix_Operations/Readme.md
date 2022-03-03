<h1>:heavy_check_mark: Matrix Operations </h1>
<blockquote>Given a binary matrix of dimensions M * N. One can perform the given operation in the matrix.

* If the value of matrix[i][j] is 0, then traverse in the same direction and check the next value.
* If the value of matrix[i][j] is 1, then update matrix[i][j] to 0 and change the current direction from up, right, down, or left to the directions right, down, left, and up respectively.

Initially you start from cell(0, 0), moving in right direction.

The task is to find the first cell of the matrix  which leads to outside the matrix from the traversal of the given matrix from the cell (0, 0) by performing the operations.</blockquote>

* **Example 1**:<br>

        Input:
        matrix[][] = {{0,1},
                     {1,0}}

        Output: (1,1)

* **Example 2**:<br>

        Input: 
        matrix[][] = {{0, 1, 1, 1, 0},
                    {1, 0, 1, 0, 1},
                    {1, 1, 1, 0, 0}}

        Output: (2,0)

**➔ Your Task**

     You don't need to read input or print anything. Complete the function endPoints() that take the matrix as input parameter and output the last cell before the pointer gets outside of the matrix.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(n*m)</td> <td align="center">O(n*m)</td></tr>
</table>

### **Constraints** 

        1<= M, N <=1000
        0<= matrix[i][j] <=1