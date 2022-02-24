<h1>:heavy_check_mark: Return two prime numbers</h1>
<blockquote>Given an even number N (greater than 2), return two prime numbers whose sum will be equal to given number. There are several combinations possible. Print only the pair whose minimum value is the smallest among all the minimum values of pairs and print the minimum element first.</blockquote>

* **Example 1**:<br>

        Input: N = 74
        Output: 3 71
        Explaination: There are several possibilities 
        like 37 37. But the minimum value of this pair 
        is 3 which is smallest among all possible 
        minimum values of all the pairs.

* **Example 2**:<br>

        Input: 4
        Output: 2 2
        Explaination: This is the only possible 
        prtitioning of 4.

**➔ Your Task**

      You do not need to read input or print anything. Your task is to complete the function primeDivision() which takes N as input parameter and returns the partition satisfying the condition.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N*log(logN))</td> <td align="center">O(N)</td></tr>
</table>

### **Constraints** 
        1 ≤ N ≤ 10^4