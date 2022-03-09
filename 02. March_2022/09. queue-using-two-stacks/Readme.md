<h1>:heavy_check_mark: Queue using two Stacks  </h1>

<blockquote>
Implement a Queue using 2 stacks s1 and s2 .
A Query Q is of 2 Types

* 1 x (a query of this type means  pushing 'x' into the queue)
* 2 (a query of this type means to pop element from queue and print the poped element)
</blockquote>

* **Example 1**:<br>

        Input:
        5
        1 2 1 3 2 1 4 2

        Output: 
        2 3

        Explanation: 
        In the first testcase
        1 2 the queue will be {2}
        1 3 the queue will be {2 3}
        2   poped element will be 2 the queue 
            will be {3}
        1 4 the queue will be {3 4}
        2   poped element will be 3.

* **Example 2**:<br>

        Input:
        4
        1 2 2 2 1 4

        Output: 
        2 -1

        Explanation: 
        In the second testcase 
        1 2 the queue will be {2}
        2   poped element will be 2 and 
            then the queue will be empty
        2   the queue is empty and hence -1
        1 4 the queue will be {4}.

**➔ Your Task**

     You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the queue and pop which returns a integer poped out from other queue(-1 if the queue is empty). The printing is done automatically by the driver code.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(1)</td> <td align="center">O(1)</td></tr>
</table>

### **Constraints** 

        1 <= Q <= 100
        1 <= x <= 100