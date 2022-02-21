<h1>:heavy_check_mark: Optimal binary search tree </h1>
<blockquote>Given a sorted array keys[0.. n-1] of search keys and an array freq[0.. n-1] of frequency counts, where freq[i] is the number of searches to keys[i]. Construct a binary search tree of all keys such that the total cost of all the searches is as small as possible.
Let us first define the cost of a BST. The cost of a BST node is level of that node multiplied by its frequency. Level of root is 1.</blockquote>

* **Example 1**:<br>

        Input:
        n = 2
        keys = {10, 12}
        freq = {34, 50}
        Output: 118
        Explaination:
        There can be following two possible BSTs 
                10                       12
                 \                     / 
                  12                 10
                                    
        The cost of tree I is 34*1 + 50*2 = 134
        The cost of tree II is 50*1 + 34*2 = 118 

* **Example 2**:<br>

        Input:
        N = 3
        keys = {10, 12, 20}
        freq = {34, 8, 50}
        Output: 142
        Explaination: There can be many possible BSTs
            20
            /
         10  
            \
            12  
            
        Among all possible BSTs, 
        cost of this BST is minimum.  
        Cost of this BST is 1*50 + 2*34 + 3*8 = 142

**➔ Your Task**

      You don't need to read input or print anything. Your task is to complete the function optimalSearchTree() which takes the array keys[], freq[] and their size n as input parameters and returns the total cost of all the searches is as small as possible.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N^3)</td> <td align="center">O(N^2)</td></tr>
</table>

### **Constraints** 
        1 ≤ N ≤ 100