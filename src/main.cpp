#include <iostream>
#include <algorithm.hpp>

int main() {
    std::array<int, 6> arr {5,9,3,7,4,2};
    qsort(arr, 0, arr.size());
    std::cout << arr[0] << std::endl;
}