<h1>:heavy_check_mark: Compute Before Matrix</h1>
<blockquote>For a given 2D Matrix before, the corresponding cell (x, y) of the after matrix is calculated as follows: 


        res = 0;
        for(i = 0; i <= x; i++){
            for( j = 0; j <= y; j++){              
                res += before(i,j);
            }
        }
        after(x,y) = res;

Given an N*M 2D-Matrix after, your task is to find the corresponding before matrix for the given matrix.
</blockquote>

* **Example 1**:<br>

        Input:
        N = 2, M = 3
        after[][] = {{1, 3, 6},
                    {3, 7, 11}}
        Output:
        1 2 3
        2 2 1
        Explanation:
        The before matrix for the given after matrix
        matrix is {{1, 2, 3}, {2, 2, 1}}.

* **Example 2**:<br>

        Input: 
        N = 1, M = 3
        after[][] = {{1, 3, 5}}
        Output:
        1 2 2
        Explanation: 
        The before matrix for the given after matrix
        is {{1, 2, 2}}.

**➔ Your Task**

     Complete the function computeBeforeMatrix() which takes the integers N, M, and the 2D Matrix after as the input parameters, and returns the before matrix of the given after matrix.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N*M)</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

        1 ≤ N, M, after[i][j]  ≤  10^9