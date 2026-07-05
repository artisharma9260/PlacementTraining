#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void HighestRepeatedLetter(string &str) {
        int len = str.length();
        int maximumword = 0;
        string result = "";

        for(int left = 0; left < len; ) {

            int right = left;

            while(right < len && str[right] != ' ')
                right++;

            int frequency[26] = {0};
            int currentmaximum = 0;

            for(int i = left; i < right; i++) {
                frequency[str[i] - 'a']++;
            }

            for(int i = 0; i < 26; i++) {
                if(frequency[i] > 1)
                    currentmaximum++;
            }

            if(currentmaximum > maximumword) {
                maximumword = currentmaximum;
                result = str.substr(left, right - left);
            }

            left = right + 1;
        }

        if(result.empty())
            cout << "-1\n";
        else
            cout << result << "\n";
    }
};

int main() {
    string str = "abcdefgh google microsoft";
    Solution obj;
    obj.HighestRepeatedLetter(str);
    return 0;
}