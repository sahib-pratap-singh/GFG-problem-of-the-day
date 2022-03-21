<h1>:heavy_check_mark: Minimum times A has to be repeated such that B is a substring of it </h1>

<blockquote>
Given two strings A and B. Find minimum number of times A has to be repeated such that B is a Substring of it. If B can never be a substring then return -1.
</blockquote>

* **Example 1**:<br>

        Input:
        A = "abcd"
        B = "cdabcdab"
        Output:
        3
        Explanation:
        Repeating A three times (“abcdabcdabcd”),
        B is a substring of it. B is not a substring
        of A when it is repeated less than 3 times. 


* **Example 2**:<br>

        Input:
        A = "ab"
        B = "cab"
        Output :
        -1
        Explanation:
        No matter how many times we repeat A, we can't
        get a string such that B is a substring of it.

**➔ Your Task**

     You don't need to read input or print anything. Your task is to complete the function minRepeats() which takes 2 strings A, and B respectively and returns the minimum number of times A has to be repeated such that B is a substring of it. Return -1 if it's not possible.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(|A| * |B|)</td> <td align="center">O(|B|)</td></tr>
</table>

### **Constraints** 

        1 ≤ |A|, |B| ≤ 10^3
        String A and B consists of lower case alphabets