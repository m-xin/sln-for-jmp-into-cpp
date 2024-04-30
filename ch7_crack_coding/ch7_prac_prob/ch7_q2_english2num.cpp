#include <cctype>
#include <cmath>
#include <iostream>
#include <string>

// hard code the numbers from 0 - 19
std::string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

// hard code tens digit less than one hundred
std::string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

std::string magnitudes[] = {"", "thousand", "million", "billion", "trillion", "quadrillion", "quintillion", "sextillion", "septillion", "octillion", "nonillion", "decillion"};

// find index
int findIndex(std::string* arr, int size, std::string str) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == str) {
            return i;
        }
    }
    return -1;
}

// Function to convert a three-digit chunk of English text to a number
int breakChunk(std::string chunk_text) {
    int num = 0;
    size_t pos = chunk_text.find("hundred");
    if (pos != std::string::npos) {
        num += (findIndex(ones, 20, chunk_text.substr(0, pos))) * 100;
        chunk_text = chunk_text.substr(pos + 6);
        if (!chunk_text.empty() && chunk_text[0] == 'a' && chunk_text[1] == 'n' && chunk_text[2] == 'd') {
            chunk_text = chunk_text.substr(3);
        }
    }
    pos = chunk_text.find('-');
    if (pos != std::string::npos) {
        num += (findIndex(tens, 10, chunk_text.substr(0, pos))) * 10;
        num += (findIndex(ones, 20, chunk_text.substr(pos + 1)));
    } else if (!chunk_text.empty()) {
        num += (findIndex(ones, 20, chunk_text));
    }
    return num;
}

long long convertToNumber(std::string text) {
    long long num = 0;
    int mag = 0;
    size_t pos = 0, nxt_pos = 0;
    while ((nxt_pos = text.find(',', pos)) != std::string::npos) {
        std::string chunk = text.substr(pos, nxt_pos - pos);
        if (!chunk.empty()) {
            num += breakChunk(chunk) * pow(1000, mag);
        }
        pos = nxt_pos + 2;
        mag++;
    }
    if (pos < text.length()) {
        num += breakChunk(text.substr(pos));
    }
    return num;
}

int main() {
    std::string english_text;
    std::cout << "Enter the number in English text: ";
    std::getline(std::cin, english_text);

    // Handle bad input
    for (char c : english_text) {
        if (!isalpha(c) && c != ' ' && c != '-' && c != ',') {
            std::cout << "Invalid input: " << english_text << std::endl;
            return 1;
        }
    }
    long long number = convertToNumber(english_text);
    std::cout << "The number is: " << number << std::endl;

    long long num2 = 123456789;
    std::cout << num2 << std::endl;

    return 0;
}

/* Answer the following questions: Is this easier or harder than the earlier algorithm? How would you handle bad input?

This implementation is much harder than the earlier algorithm.

Parsing the input: The input is in the form of English text, which requires more complex parsing to extract the relevant information. The code needs to handle different formats, such as "one hundred and twenty-five" or "one million, two hundred and thirty-four thousand, five hundred and sixty-seven".

Handling bad input: The code needs to handle cases where the input is not valid English text, such as containing non-alphabetic characters. This requires additional checks and error handling.

Converting the text to numbers: The code needs to match the English text to the corresponding numerical values, which involves searching through the ones and tens arrays and performing the appropriate calculations.

Overall, the reverse operation is more complex than the original algorithm, as it requires more sophisticated parsing and error handling. However, the core logic of breaking down the number and handling the different magnitudes remains similar.

The provided implementation handles bad input by checking each character in the input string for non-alphabetic characters (except for spaces, hyphens, and commas). If any invalid characters are found, the code prints an error message and returns 1 to indicate a failure.

by the way, this solution remains some issues.

*/