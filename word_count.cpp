#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// Function to count words in a string
int countWords(const std::string& content) {
    std::istringstream iss(content);
    int wordCount = 0;
    std::string word;

    // Read words from the string using istringstream and count them
    while (iss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    std::string filename;
    std::cout << "Enter the file name: ";
    std::cin >> filename;

    // Open the file
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "File not found." << std::endl;
        return 1; // Return an error code
    }

    // Read the entire content of the file into a string
    std::string fileContent(
        (std::istreambuf_iterator<char>(file)),
        (std::istreambuf_iterator<char>())
    );

    // Call the countWords function to get the word count
    int wordCount = countWords(fileContent);
    std::cout << "Total word count in '" << filename << "': " << wordCount << std::endl;

    return 0; 
}
