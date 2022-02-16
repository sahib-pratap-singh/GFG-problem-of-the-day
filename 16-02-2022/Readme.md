<h1>:heavy_check_mark: Find rectangle with corners as 1</h1>
<blockquote>Given a NxM binary matrix consisting of 0s and 1s. Find if there exists a rectangle/ square within the matrix whose all four corners are 1.</blockquote>

* **Example 1**:<br>

&emsp;&emsp;Input:<br>
&emsp;&emsp;N = 4, M = 5<br>
&emsp;&emsp;matrix[][] = <br>
&emsp;&emsp;{<br>
&emsp;&emsp;{1 0 0 1 0},<br>
&emsp;&emsp;{0 0 1 0 1},<br>
&emsp;&emsp;{0 0 0 1 0}, <br>
&emsp;&emsp;{1 0 1 0 1}<br>
&emsp;&emsp;} <br>

&emsp;&emsp;Output: Yes<br>
&emsp;&emsp;Explanation:<br>
&emsp;&emsp;Valid corners are at index (1,2), (1,4), (3,2), (3,4) <br>

* **Example 2**:<br>

&emsp;&emsp;Input:<br>
&emsp;&emsp;N = 3, M = 3<br>
&emsp;&emsp;matrix[][] = <br>
&emsp;&emsp;{{0 0 0},<br>
&emsp;&emsp;{0 0 0},<br>
&emsp;&emsp;{0 0 0}}<br>
&emsp;&emsp;Output: No<br>

**➔ Your Task**:
<mark>You don't need to take input or print anything. Complete the function ValidCorners() that takes the given matrix as input parameter and returns a boolean value.</mark>

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N)</td> <td align="center">O(1)</td></tr>
</table>

#### Constraints 
1 <= R, C <= 200<br>
0 <= A[i] <= 1