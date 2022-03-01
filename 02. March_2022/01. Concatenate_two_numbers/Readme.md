<h1>:heavy_check_mark: Concatenate two numbers </h1>
<blockquote>Given an array numbers[] of N positive integers and a positive integer X, The task is to find the number of ways that X can be obtained by writing pair of integers in the array numbers[] next to each other. In other words, find the number of ordered pairs (i,j) such that i != j and X is the concatenation of numbers[i] and numbers[j]</blockquote>

* **Example 1**:<br>

        Input:
        N = 4 
        numbers[] = {1, 212, 12, 12}
        X = 1212
        Output:
        3
        Explanation:
        We can obtain X=1212 by concatenating:
        numbers[0] = 1 with numbers[1] = 212
        numbers[2] = 12 with numbers[3] = 12
        numbers[3] = 12 with numbers[2] = 12

* **Example 2**:<br>

        Input: 
        N = 3
        numbers[] = {11, 11, 110}
        X = 11011
        Output:
        2
        Explanation:
        We can obtain X=11011 by concatenating:
        numbers[2] = 110 with numbers[0] = 11
        numbers[2] = 110 with numbers[1] = 11

**➔ Your Task**

      You dont need to read input or print anything. Your task is to complete the function countPairs() which takes the integer N , the integer X, and the array numbers[] as the input parameters, and returns the number of pairs which satisfies the above condition.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N*Log10(A[i]) + (Log10X)2)</td> <td align="center">O(N*Log10(A[i]))</td></tr>
</table>

### **Constraints** 

        1 ≤ N ≤ 5*10^4 
        1 ≤ numbers[] ≤ 10^9
        1 ≤ X ≤ 10^9