<h1>:heavy_check_mark: Robots</h1>
<blockquote>There are two kinds of bots A and B in a 1-D array. A bot can only move left while B can only move right. There are also empty spaces in between represented by #. But its also given that the bots cannot cross over each other.

Given the initial state and final state, we should tell if the transformation is possible.</blockquote>

* **Example 1**:<br>

        Input:
        s1 = #B#A#
        s2 = ##BA#
        Output: Yes
        Explanation: Because we can reach the 
        final state by moving 'B' to the 
        right one step.

* **Example 2**:<br>

        Input:
        s1 = #B#A#
        s2 = #A#B# 
        Output: No
        Explanation: Because the robots 
        cannot cross each other.

**➔ Your Task**

      You don't need to read input or print anything. Your task is to complete the function moveRobots() which takes the initial and final states as strings s1 and s2 respectively and returns if a valid transformation can be done. Return "Yes" if possible, else "No".

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(|s1|)</td> <td align="center">O(|s1|)</td></tr>
</table>

### **Constraints** 
        1 <= |s1| = |s2| <= 10^5
    The strings only consists of 'A', 'B' and '#'.