<h1>:heavy_check_mark: Smallest window containing 0, 1 and 2</h1>
<blockquote>Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.</blockquote>

* **Example 1**:<br>

        Input:
        S = "01212"
        Output:
        3
        Explanation:
        The substring 012 is the smallest substring
        that contains the characters 0, 1 and 2.

* **Example 2**:<br>

        Input: 
        S = "12121"
        Output:
        -1
        Explanation: 
        As the character 0 is not present in the
        string S, therefor no substring containing
        all the three characters 0, 1 and 2
        exists. Hence, the answer is -1 in this case.

**➔ Your Task**

        Complete the function smallestSubstring() which takes the string S as input, and returns the length of the smallest substring of string S that contains all the three characters 0, 1 and 2.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(|s|)</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

        1 ≤ |S| ≤ 10^5
        All the characters of String S lies in the set {'0', '1', '2'} 