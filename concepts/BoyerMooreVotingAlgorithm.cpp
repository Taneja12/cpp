/*
Boyer-Moore Voting Algorithm

Step 1: Candidate Selection – Iterate through the array and maintain a count for a potential
majority element. If the count is zero, select the current element as the majority candidate.
Increment the count if the current element is the same as the candidate, otherwise decrement
the count.
Step 2: Majority Verification – Since the problem guarantees that a majority element exists,
 the candidate selected in the first step is the majority element.

Time Complexity : O(n)
Space Complexity: O(1)

*/

//Example ques on c++ MajorityELement from Leetcode ques number 169