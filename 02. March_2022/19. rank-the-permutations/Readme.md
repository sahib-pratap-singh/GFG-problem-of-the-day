<h1>:heavy_check_mark: Rank The Permutations </h1>

<blockquote>
Given a string, find the rank of the string amongst its permutations sorted lexicographically. 
</blockquote>

* **Example 1**:<br>

        Input:
        S = "abc"
        Output:
        1
        Explanation:
        The order permutations with letters 
        'a', 'c', and 'b' : 
        abc
        acb
        bac
        bca
        cab
        cba


* **Example 2**:<br>

        Input:
        S = "acb"
        Output:
        2

**➔ Your Task**

     You don't need to read input or print anything. Your task is to complete the function findRank() which takes the string S as input parameter and returns the rank of the string amongst its permutations.
        It is guaranteed no characters are repeated in the string.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(|S|*26)</td> <td align="center">O(|S|)</td></tr>
</table>

### **Constraints** 

        1 ≤ |S| ≤ 18