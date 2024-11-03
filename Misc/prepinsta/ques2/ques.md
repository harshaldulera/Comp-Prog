### Problem Statement

Given a string `str` of lowercase alphabets, the task is to find the maximum occurring character in the string `str`. If more than one character occurs the maximum number of times, print the lexicographically smaller character.

### Example 1:
Input: str = testsample

Output: e

Explanation: e is the character which is having the highest frequency.


### Example 2:
Input: str = output

Output: t

Explanation: t and u are the characters with the same frequency, but t is lexicographically smaller.


### Your Task:
You need to complete the function `getMaxOccuringChar()` which takes a string `str` as input and returns the character that occurs the most.

### Expected Time Complexity:
- O(N)

### Expected Auxiliary Space:
- O(Number of distinct characters)

### Constraints:
- 1 ≤ |s| ≤ 100
