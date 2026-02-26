#include <cctype>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, k = n - 1;

        while (i < k) {
            // Skip non-alphanumeric characters
            while (i < k && !isalnum(s[i])) {
                i++;
            }
            while (i < k && !isalnum(s[k])) {
                k--;
            }

            // Compare characters (case-insensitive)
            if (tolower(s[i]) != tolower(s[k])) {
                return false;
            }

            i++;
            k--;
        }

        return true;
    }
};