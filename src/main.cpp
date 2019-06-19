#include <iostream>
#include <algorithm.hpp>
#include <chrono>

int main() {
    std::array<int, 10> arr {35,33,42,10,14,19,27,44,26,31};
    slcsort(arr);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << " ";
    }
    /*
    qsort(arr, 0, arr.size()-1);
    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << std::endl;
    }
     */
}