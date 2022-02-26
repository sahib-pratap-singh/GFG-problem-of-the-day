<h1>:heavy_check_mark: Escape the Forbidden Forest</h1>
<blockquote>Penelope and her classmates are lost in the Forbidden Forest and the Devil is out to get them. But Penelope has magical powers that can build bridges across the dangerous river and take her friends to safety. The only bridges that can withstand the Devil's wrath are the ones built between two similar trees in the forest. 
Given str1 and str2 denoting the order of trees on either side of the river, find the maximum number of bridges that Penelope can build and save everyone from the Devil. </blockquote>

* **Example 1**:<br>

        Input:
        str1 = "*@#*" 
        str2 = "*#"
        Output:
        2
        Explanation:
        str1 = "*@#*" and str2 = "*#" 
        Two bridges can be built between the banks 
        of the river in the following manner. 
        * @ # *
        |      |
        *     #

* **Example 2**:<br>

        Input:
        str1 = "***"
        str2 = "##"
        Output:
        0

**➔ Your Task**

      You don't need to read input or print anything. Complete the function build_bridges() that takes str1 and str2 as input parameters and returns the maximum number of bridges that can be built. 

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N*M)</td> <td align="center">O(N*M)</td></tr>
</table>

### **Constraints** 

        1 ≤ N, M ≤ 100
        Where, N and M are the size of the string str1 and str2 respectively.   