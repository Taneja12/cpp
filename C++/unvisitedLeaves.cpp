#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int unvisitedLeaves(int N, int leaves, int frogs[])
    {
        vector<bool> visited(leaves + 1, false);  // +1 to include 1-based indexing

        // Sort frogs to handle smaller jumps first
        sort(frogs, frogs + N);

        for (int i = 0; i < N; i++)
        {
            int frogJump = frogs[i];

            // If the frog's jump size is greater than the number of leaves, skip it.
            if (frogJump > leaves)
                break; // No need to process larger jumps

            // Only start marking if frogJump hasn't been covered by a smaller jump
            if (!visited[frogJump])
            {
                // Mark multiples of frogJump as visited
                for (int j = frogJump; j <= leaves; j += frogJump)
                {
                    visited[j] = true;
                }
            }
        }

        // Count unvisited leaves starting from index 1 (ignore index 0)
        return count(visited.begin() + 1, visited.end(), false);
    }
};

int main()
{
    int N = 3;
    int leaves = 6;
    int frogs[] = {1, 3, 5};

    Solution ob;
    cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;

    return 0;
}
