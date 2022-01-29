class Solution {
public:
    string addRoman(int &num) {
        if (num / 1000) {
            num -= 1000;
            return "M";
        }
        if (num / 900) {
            num -= 900;
            return "CM";
        }
        if (num / 500) {
            num -= 500;
            return "D";
        }
        if (num / 400) {
            num -= 400;
            return "CD";
        }
        if (num / 100) {
            num -= 100;
            return "C";
        }
        if (num / 90) {
            num -= 90;
            return "XC";
        }
        if (num / 50) {
            num -= 50;
            return "L";
        }
        if (num / 40) {
            num -= 40;
            return "XL";
        }
        if (num / 10) {
            num -= 10;
            return "X";
        }
        if (num / 9) {
            num -= 9;
            return "IX";
        }
        if (num / 5) {
            num -= 5;
            return "V";
        }
        if (num / 4) {
            num -= 4;
            return "IV";
        }
        num -= 1;
        return "I";
    }
    
    string intToRoman(int num) {
        string out = "";
        while (num) {
            out += addRoman(num);
        }
        return out;
    }
};
