class Solution
{
public:
    // s consists of English letters, digits, symbols and spaces.
    int lengthOfLongestSubstring(std::string s)
    {
        std::string subString = "";
        int max = 0;

        for (int idx = 0; idx < s.length(); ++idx)
        {
            if (isExist(s[idx], subString) != -1)
            {
                max = returnMax(max, (int)subString.length());
                std::string tempString = "";
                for (int x = isExist(s[idx], subString) + 1; x < subString.length(); ++x)
                {
                     tempString += subString[x];
                }
                subString = tempString;
            }

            subString += s[idx];
        }

        max = returnMax(max, (int)subString.length());

        return max;
    }

    int returnMax(int x, int y)
    {
        if (x > y)
        {
            return x;
        }

        else
        {
            return y;
        }
    }

    int isExist(char ch, std::string s) const
    {
        for (int idx = 0; idx < s.length(); ++idx)
        {
            if (s[idx] == ch)
            {
                return idx;
            }
        }

        return -1;
    }
};