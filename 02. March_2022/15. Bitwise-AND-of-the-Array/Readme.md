<h1>:heavy_check_mark: Bitwise AND of the Array </h1>

<blockquote>
Given an array A[ ] of N integers and an integer X. In one operation, you can change the ith element of the array to any integer value where 1 ≤ i ≤ N. Calculate minimum number of such operations required such that the bitwise AND of all the elements of the array is strictly greater than X.
</blockquote>

* **Example 1**:<br>

      Input:
      N = 4, X = 2
      A[] = {3, 1, 2, 7}
      Output: 
      2
      Explanation: 
      After performing two operations:
      Modified array: {3, 3, 11, 7} 
      Now, Bitwise AND of all the elements
      is 3 & 3 & 11 & 7 = 3 

* **Example 2**:<br>

      Input:
      N = 3, X = 1
      A[] = {2, 2, 2}
      Output: 
      0

**➔ Your Task**

     You don't need to read input or print anything. Your task is to complete the function count( ) which takes N, A[ ] and X as input parameters and returns the minimum number of operations required.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N * Log(max(A[ ])))</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

      1 ≤ N ≤ 10^5
      1 ≤ A[i] ≤ 10^9
      1 ≤ X ≤ 10^9