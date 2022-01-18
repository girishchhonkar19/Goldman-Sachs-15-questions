# Overlapping rectangles
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two rectangles, find if the given two rectangles overlap or not. A rectangle is denoted by providing the x and y coordinates of two points: the left top corner and the right bottom corner of the rectangle. Two rectangles sharing a side are considered overlapping. (L1 and R1 are the extreme points of the first rectangle and L2 and R2 are the extreme points of the second rectangle).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:&nbsp;</strong>It may be assumed that the rectangles are parallel to the coordinate axis.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><a href="http://d1hyf4ir1gqw6c.cloudfront.net//wp-content/uploads/rectanglesOverlap.png" target="_blank" style="user-select: auto;"><img alt="rectanglesOverlap" class="aligncenter size-full wp-image-126964 img-responsive" src="http://d1hyf4ir1gqw6c.cloudfront.net/wp-content/uploads/rectanglesOverlap.png" style="height: 196px; width: 303px; user-select: auto;"></a></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
L1=(0,10)
R1=(10,0)
L2=(5,5)
R2=(15,0)
<strong style="user-select: auto;">Output:</strong>
1
<strong style="user-select: auto;">Explanation:</strong>
The rectangles overlap.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
L1=(0,2)
R1=(1,1)
L2=(-2,0)
R2=(0,-3)
<strong style="user-select: auto;">Output:</strong>
0
<strong style="user-select: auto;">Explanation:</strong>
The rectangles do not overlap.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">doOverlap()</strong> which takes the points L1, R1, L2, and R2 as input parameters and returns 1 if the rectangles overlap. Otherwise, it returns 0.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>O(1)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxillary Space:</strong>O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
-10<sup style="user-select: auto;">9</sup>&lt;=x-coordinate,y-coordinate&lt;=10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>