<h1>:heavy_check_mark: Merge K sorted linked lists</h1>

<blockquote>
Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.
</blockquote>

* **Example 1**:<br>

        Input:
        K = 4
        value = {{1,2,3},{4 5},{5 6},{7,8}}
        Output: 1 2 3 4 5 5 6 7 8
        Explanation:
        The test case has 4 sorted linked 
        list of size 3, 2, 2, 2
        1st    list     1 -> 2-> 3
        2nd   list      4->5
        3rd    list      5->6
        4th    list      7->8
        The merged list will be
        1->2->3->4->5->5->6->7->8.

* **Example 2**:<br>

        Input:
        K = 3
        value = {{1,3},{4,5,6},{8}}
        Output: 1 3 4 5 6 8
        Explanation:
        The test case has 3 sorted linked
        list of size 2, 3, 1.
        1st list 1 -> 3
        2nd list 4 -> 5 -> 6
        3rd list 8
        The merged list will be
        1->3->4->5->6->8.

**➔ Your Task**

     The task is to complete the function mergeKList() which merges the K given lists into a sorted one. The printing is done automatically by the driver code.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(nk*Logk)</td> <td align="center">O(k)</td></tr>
</table>

### **Constraints** 

        1 <= K <= 10^3