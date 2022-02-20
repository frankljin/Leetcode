#include <iostream>
#include <cstring>

void urlify(char *str, int len) {
    int sCount = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') sCount++;
    }
    int newLen = len + 2 * sCount;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[newLen - 1] = '0';
            str[newLen - 2] = '2';
            str[newLen - 3] = '%';
            newLen -= 3;
        } else {
            str[newLen - 1] = str[i];
            newLen -= 1;
        }
    }
}

int main() {
    char str[] = "Mr John Smith    ";
    std::cout << "Actual string   : " << str << std::endl;
    urlify(str, 13);
    std::cout << "URLified string : " << str << std::endl;
    return 0;
}