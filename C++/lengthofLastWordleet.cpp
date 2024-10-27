#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        stringstream ss(s);
        vector<string> words;
        string word;
        while (getline(ss, word, ' '))
        {
            if (!word.empty())
            {
                words.push_back(word);
            }
        }
        return words[words.size() - 1].length();
    }
};

int main()
{
    string s = "   fly me   to   the moon  ";
    Solution s1;
    cout << s1.lengthOfLastWord(s);
    return 0;
}