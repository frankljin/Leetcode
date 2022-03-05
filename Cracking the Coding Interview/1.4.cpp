#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <cctype>

using namespace std;

char toLowerCase(char c) {
    if (!islower(c)) {
        return tolower(c);
    }
    return c;
}

bool isPermutationOfPalindrome(const string &phrase) {
    unordered_map<char, int> counts;
    for (int i = 0; i < phrase.length(); i++) {
        if (phrase[i] == ' ') {
            continue;
        } else if (counts.find(toLowerCase(phrase[i])) != counts.end()) {
            counts[toLowerCase(phrase[i])]++;
        } else {
            counts[toLowerCase(phrase[i])] = 1;
        }
    }
    int unevenCounts = 0;
    for (auto const& pair : counts) {
        if (pair.second % 2 != 0) {
            unevenCounts += 1;
        }
        if (unevenCounts > 1) return false;
    }
    return true;
}

int main(int argc, const char *argv[]) {
    string pali = "Tact Coa";
    string isPermutation = isPermutationOfPalindrome(pali) ? "yes" : "no";
    cout << isPermutation << endl;
    return 0;
}

