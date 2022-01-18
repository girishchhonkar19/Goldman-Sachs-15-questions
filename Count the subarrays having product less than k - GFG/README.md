# Count the subarrays having product less than k
## Hard 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;">Given an array of positive numbers, the task is to find the number of possible contiguous subarrays having product less than a given number k. </span></span></p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></span></p>

<pre style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input : 
</strong>n = 4, k = 10
a[] = {1, 2, 3, 4}
<strong style="user-select: auto;">Output : </strong>
7
<strong style="user-select: auto;">Explanation:</strong>
The contiguous subarrays are {1}, {2}, {3}, {4} 
{1, 2}, {1, 2, 3} and {2, 3} whose count is 7.</span></span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></span></p>

<pre style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 7 , k = 100
a[] = {1, 9, 2, 8, 6, 4, 3}
<strong style="user-select: auto;">Output:</strong>
16</span></span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">countSubArrayProductLessThanK()</strong>&nbsp;which takes the array <strong style="user-select: auto;">a[]</strong>, its size <strong style="user-select: auto;">n</strong><strong style="user-select: auto;"> </strong>and an integer <strong style="user-select: auto;">k</strong> as inputs and returns the count of required subarrays.</span></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(n)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1)</span></span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-family: arial, helvetica, sans-serif; user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=n&lt;=10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1&lt;=k&lt;=10<sup style="user-select: auto;">15</sup><br style="user-select: auto;">
1&lt;=a[i]&lt;=10<sup style="user-select: auto;">5</sup></span></span></p>
 <p style="user-select: auto;"></p>
            </div>