#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words {"David", "Donal", "Debra"};
    size_t number_of_Ds{};
    const auto count_Ds=[&number_of_Ds](const auto& word) {
        if (word.empty()) return;
        if(word[0] == 'D') ++number_of_Ds;
    };

    for_each(words.begin(), words.end(), count_Ds);
    std::cout << number_of_Ds << std::endl;
}