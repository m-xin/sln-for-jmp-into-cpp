#include <cmath>
#include <iostream>
#include <string>

// hard code the numbers from 0 - 19
std::string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

// hard code tens digit less than one hundred
std::string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

// step1: Break the number up into chunks of 3-digits
std::string breakChunk(int num) {
    std::string res = "";
    if (num >= 100) {
        res += ones[num / 100] + " hundred";  // step3: get hundred digits
        num = num % 100;
        if (num > 0) {
            res += " and ";  // num is Undivisible, now get tens and ones digits
        }
    }
    if (num < 20) {
        res += ones[num];  // using the hardcoded texts of ones digit
    } else {
        res += tens[num / 10];  // step4: get tens from above modulus by divided 10
        if (num % 10 > 0) {
            res += "-" + ones[num % 10];  // tens digit is undivisible, get ones
        }
    }
    return res;  // the 3-digit number converted.
}

// convert a number to a english text
std::string convertToEnglish(long long num) {
    // corner case:
    if (num == 0) {
        return "zero";
    }
    std::string res = "";
    std::string magnitudes[] = {"", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion", "sextillion", "septillion", "octillion", "nonillion", "decillion"};
    int mag = 0;
    while (num > 0) {
        if (num % 1000 != 0) {
            res = breakChunk(num % 1000) + " " + magnitudes[mag] + (res.empty() ? "" : ", ") + res;
        }
        num = num / 1000;
        mag++;
    }
    return res;
}

int main() {
    long long number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "The number in English is: " << convertToEnglish(number) << std::endl;

    return 0;
}
