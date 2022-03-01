<h1>:heavy_check_mark: Corona Vaccine</h1>
<blockquote>Geek has developed an effective vaccine for Corona virus and he wants each of the N houses in Geek Land to have access to it. Given a binary tree where each node represents a house in Geek Land, find the minimum number of houses that should be supplied with the vaccine kit if one vaccine kit is sufficient for that house, its parent house and it's immediate child nodes.  ?</blockquote>

* **Example 1**:<br>

        Input:
         1
        / \
       2   3 
             \
              4
                \
                 5
                   \
                    6

        Output:
        2
        Explanation:
        The vaccine kits should be 
        supplied to house numbers 1 and 5. 

* **Example 2**:<br>

        Input:
         1
        / \
       2   3 
        Output:
        1
        Explanation:
        The vaccine kits should be 
        supplied to house number 1.

**➔ Your Task**

      You don't need to read input or print anything. Complete the function supplyVaccine() which takes the root of the housing tree as input parameter and returns the minimum number of houses that should be supplied with the vaccine kit.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N)</td> <td align="center">O(N)</td></tr>
</table>

### **Constraints** 
        1 ≤ N ≤ 105