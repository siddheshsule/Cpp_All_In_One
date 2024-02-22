#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <vector>



int main() {

    std::vector <std::string> words {"Annemarie", "Jeannete", "Angelina"};
    const auto starts_with_a =
    [](const auto& word){
        if (word.empty()) {return false;}
        if(word[0] == 'A' || word[0] == 'a') {
            return true;
        }
    };

    auto result = std::all_of(words.begin(), words.end(), starts_with_a);
    std::cout << result << std::endl;
}
