#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_set>
#include <string>

// Function to split a string by spaces into a vector of strings
std::vector<std::string> splitString(const std::string& str) {
    std::vector<std::string> result;
    std::istringstream iss(str);
    std::string word;
    while (iss >> word) {
        result.push_back(word);
    }
    return result;
}

// Function to find the added segments from the second string to the first string
std::vector<std::string> findAddedSegments(const std::string& str1, const std::string& str2) {
    std::vector<std::string> cities1 = splitString(str1);
    std::vector<std::string> cities2 = splitString(str2);

    std::unordered_set<std::string> segments1;
    std::vector<std::string> addedSegments;

    // Generate segments from the first string
    for (size_t i = 0; i < cities1.size() - 1; ++i) {
        segments1.insert(cities1[i] + cities1[i + 1]);
    }

    size_t start = 0;
    while (start < cities2.size() - 1) {
        std::string segment = cities2[start];
        size_t end = start + 1;

        // Continue to add to the segment until it matches one from the first string
        while (end < cities2.size() && segments1.find(cities2[end - 1] + cities2[end]) == segments1.end()) {
            segment += cities2[end];
            ++end;
        }

        if (end > start + 1) {
            addedSegments.push_back(segment);
        }

        start = end;
    }

    return addedSegments;
}

int main() {
    std::string str1 = "A B C D E F G";
    std::string str2 = "H B C J K E F L G M";

    std::vector<std::string> addedSegments = findAddedSegments(str1, str2);

    std::cout << "Added segments: ";
    for (const std::string& segment : addedSegments) {
        std::cout << segment << " ";
    }
    std::cout << std::endl;

    return 0;
}
