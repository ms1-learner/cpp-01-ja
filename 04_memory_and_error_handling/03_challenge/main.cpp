#include <iostream>
#include <vector>

// コードを入力してください
std::vector<int> double_elements(const std::vector<int>& numbers) {
    std::vector<int> result;
    for(int n : numbers) {
        result.push_back(n * 2);
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // コードを入力してください
    std::cout << "Old vector: ";
    for(int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::vector<int> result_list;
    result_list = double_elements(numbers);
    std::cout << "New vector: ";
    for(int n : result_list) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

}