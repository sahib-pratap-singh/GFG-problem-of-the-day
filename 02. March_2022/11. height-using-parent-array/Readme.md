<h1>:heavy_check_mark: Height Using Parent Array </h1>

<blockquote>
Given a parent array arr[] of a binary tree of N nodes. Element at index i in the array arr[] represents the parent of ith node, i.e, arr[i] = parent(i). Find the height of this binary tree.
Note: There will be a node in the array arr[], where arr[i] = -1, which means this node is the root of binary tree.
</blockquote>

* **Example 1**:<br>

        Input: N = 7
        arr = {-1, 0, 0, 1, 1, 3, 5}
        Output: 5
        Explanation: Tree formed is:
                        0
                       / \
                      1   2
                     / \
                    3   4
                   /
                  5
                 /
                6      Height of the tree= 5

<!-- * **Example 2**:<br>

        Input:
        N = 3
        S = "011"
        Output:
        011
        Explanation:
        011 has a total of 10 segments and this
        is the smallest number with 10 segments. -->

**➔ Your Task**

     You do not need to read input or print anything. Your task is to complete the function findHeight() which takes N and arr[] as input parameters and returns the height of the given binary tree.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N)</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

        1 ≤ N ≤ 10^4
        0 ≤ arr[i] ≤ 10^4   