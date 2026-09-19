#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

bool palindrome(const std::string& text) {
    if (text.size() <= 1) return true;
    if (text.front() != text.back()) return false;
    return palindrome(text.substr(1, text.size() - 2));
}

std::string normalize(std::string text) {
    text.erase(std::remove_if(text.begin(), text.end(), [](unsigned char ch) {
        return !std::isalnum(ch);
    }), text.end());
    for (char& ch : text) ch = static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
    return text;
}

int main() {
    const std::string words[] = {"reaver", "kayak", "Borrow or rob", "Race Car", "Was it a cat I saw", "love love"};
    for (const std::string& word : words) {
        std::cout << word << " --> " << (palindrome(normalize(word)) ? "O" : "X") << '\n';
    }
}
