#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>




std::vector<int> get_next_row(const std::vector<int>&last_row); 
auto generate_triangle(int rows);   

template<typename T>
std::ostream& operator << (std::ostream& s,
const std::vector<std::vector<T>>& triangle)
{
    for(const auto& row : triangle) {
        std::copy(row, std::ostream_iterator<T>(s," "));
        s << '\n';
    }
    return s;
}
auto generate_triangle(int rows) {
    std::vector<std::vector<int>> triangle{{1}};
    for(int row = 1; row < rows; ++row){
        triangle.push_back(get_next_row(triangle.back()));
    }
    return triangle;
}

std::vector<int> get_next_row(const std::vector<int>&last_row) 
{
    std::vector<int> next_row{1};
    if(last_row.empty()) {
        return next_row;
    }
    for(size_t idx=0; idx+1 < last_row.size(); ++idx) {
        next_row.emplace_back(last_row[idx] + last_row[idx+1]);
    }
    next_row.emplace_back(1);
    return next_row;
}


auto main() -> int {
   
}