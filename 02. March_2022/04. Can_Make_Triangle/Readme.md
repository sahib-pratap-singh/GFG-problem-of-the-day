<h1>:heavy_check_mark: Can Make Triangle </h1>
<blockquote>Given an array A[] of N elements, You'd like to know how many triangles can be formed with side lengths equal to adjacent elements from A[].

Construct an array of integers of length N - 2 where ith element is equal to 1 if it is possible to form a triangle with side lengths A[i], A[i+1], and A[i+2]. otherwise 0.

Note: A triangle can be formed with side lengths a, b and c if a+b>c and a+c>b and b+c>a.</blockquote>

* **Example 1**:<br>

        Input:
        N = 4
        A[] = {1, 2, 2, 4}
        Output:
        1 0
        Explanation:
        output[0] = 1 because we can form a 
        triangle with side lengths 1,2 and 2.
        output[1] = 0 because 2+2<4 so, we cannot 
        form a triangle with side lengths 2,2 and 4.

* **Example 2**:<br>

        Input: 
        N = 5
        A[] = {2, 10, 2, 10, 2}
        Output:
        0 1 0
        Explanation:
        output[0] = 0 because 2+2<10 so, we cannot
        form a triangle with side lengths 2, 10 and 2. 
        output[1] = 1 we can form a triangle with 
        side lengths 10,2 and 10. 
        output[1] = 0 because 2+2<10 so, we can
        form a triangle with side lengths 2, 10 and 2.

**➔ Your Task**

     You dont need to read input or print anything. Your task is to complete the function canMakeTriangle() which takes the array A and the integer N as the input parameters, and returns the array of answers.

<table align="center">
      <tr><td><em><b>Expected Time Complexity</td> <td><em><b>Expected Auxiliary Space</td></tr>
      <tr><td align="center">O(N)</td> <td align="center">O(N)</td></tr>
</table>

### **Constraints** 

        3 ≤ N ≤ 10^5 
        1 ≤ arr[i] ≤ 10^9