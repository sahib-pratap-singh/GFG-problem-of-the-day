<h1>:heavy_check_mark: Exactly one swap </h1>
<blockquote>Given a string S containing lowercase english alphabet characters. The task is to calculate the number of distinct strings that can be obtained after performing exactly one swap.
In one swap,Geek can pick two distinct index i and j (i.e 1 < i < j < |S| ) of the string, then swap the characters at the position i and j.</blockquote>

* **Example 1**:<br>

        Input:
        S = "geek"
        Output: 
        6
        Explanation: 
        After one swap, There are only 6 distinct strings 
        possible.(i.e "egek","eegk","geek","geke","gkee" and 
        "keeg")

* **Example 2**:<br>

        Input:
        S = "ab"
        Output: 
        1
        Explanation:
        Only one string is possible after one swap(i.e "ba")

**➔ Your Task**

     You don't need to read input or print anything. Complete the function countStrings( ) which takes the string S as input parameters and returns the required answer.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(|s|)</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

        2 ≤ |S| ≤ 10^5
        S contains lowercase characters