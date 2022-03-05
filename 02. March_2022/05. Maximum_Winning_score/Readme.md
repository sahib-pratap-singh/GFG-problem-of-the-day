<h1>:heavy_check_mark: Maximum Winning score </h1>
<blockquote>In an online game, N blocks are arranged in a hierarchical manner. All the blocks are connected together by a total of N-1 connections. Each block is given an ID from 1 to N. A block may be further connected to other blocks. Each block is also assigned a specific point value.

A player starts from Block 1. She must move forward from each block to a directly connected block until she reaches the final block, which has no further connection. When the player lands on a block, she collects the point value of that block. The players score is calculated as the product of point values that the player collects.
Find the maximum score a player can achieve.

Note: The answer can always be represented with 64 bits.</blockquote>

* **Example 1**:<br>

        Input:
              4
             / \
            2   8
           / \ / \
          2  1 3  4
        Output: 128
        Explanation: Path in the given tree 
        goes like 4, 8, 4 which gives the max
        score of 4x8x4 = 128.

* **Example 2**:<br>

        Input:
               10
             /    \
            7      5
                    \
                     1
        Output: 70
        Explanation: The path 10, 7 gives a 
        score of 70 which is the maximum possible.

**➔ Your Task**

     You don't need to take input or print anything. Your task is to complete the function findMaxScore() that takes root as input and returns max score possible.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N)</td> <td align="center">O(N)</td></tr>
</table>

### **Constraints** 

        1 ≤ Number of nodes ≤ 10^3
        1 ≤ Data on node ≤ 10
        It is guaranteed that the answer will always fit in the 64-bit Integer