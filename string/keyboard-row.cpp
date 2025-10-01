#include <bits/stdc++.h>
using namespace std;

vector<string> findWords(vector<string> &words)
{
    unordered_set<char> s1;
    unordered_set<char> s2;
    unordered_set<char> s3;

    string row1upper = "QWERTYUIOP";
    string row2upper = "ASDFGHJKL";
    string row3upper = "ZXCVBNM";
    string row1lower = "qwertyuiop";
    string row2lower = "asdfghjkl";
    string row3lower = "zxcvbnm";

    for (char ch : row1upper)
    {
        s1.insert(ch);
    }
    for (char ch : row1lower)
    {
        s1.insert(ch);
    }
    for (char ch : row2upper)
    {
        s2.insert(ch);
    }
    for (char ch : row2lower)
    {
        s2.insert(ch);
    }
    for (char ch : row3upper)
    {
        s3.insert(ch);
    }
    for (char ch : row3lower)
    {
        s3.insert(ch);
    }

    vector<string> result;
    for (string word : words)
    {
        bool inRow1 = true, inRow2 = true, inRow3 = true;
        for (char ch : word)
        {
            if (s1.find(ch) == s1.end())
            {
                inRow1 = false;
            }
            if (s2.find(ch) == s2.end())
            {
                inRow2 = false;
            }
            if (s3.find(ch) == s3.end())
            {
                inRow3 = false;
            }
        }
        if (inRow1 || inRow2 || inRow3)
        {
            result.push_back(word);
        }
    }
    return result;
}

int main()
{

    return 0;
}