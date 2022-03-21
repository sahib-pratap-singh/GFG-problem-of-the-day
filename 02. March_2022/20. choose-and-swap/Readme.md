<h1>:heavy_check_mark: Choose and Swap  </h1>

<blockquote>
You are given a string s of lower case english alphabets. You can choose any two characters in the string and replace all the occurences of the first character with the second character and replace all the occurences of the second character with the first character. Your aim is to find the lexicographically smallest string that can be obtained by doing this operation at most once.
</blockquote>

* **Example 1**:<br>

        Input:
        A = "ccad"
        Output: "aacd"
        Explanation:
        In ccad, we choose a and c and after 
        doing the replacement operation once we get, 
        aacd and this is the lexicographically
        smallest string possible. 


* **Example 2**:<br>

        Input:
        A = "abba"
        Output: "abba"
        Explanation:
        In abba, we can get baab after doing the 
        replacement operation once for a and b 
        but that is not lexicographically smaller 
        than abba. So, the answer is abba. 

**➔ Your Task**

     You don't need to read input or print anything. Your task is to complete the function chooseandswap() which takes the string A as input parameters and returns the lexicographically smallest string that is possible after doing the operation at most once.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(|S|)</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

        1 ≤ |S| ≤ 10^5