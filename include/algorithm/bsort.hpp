//
// Created by cameron on 6/13/2019.
//

#ifndef SORTING_BSORT_HPP
#define SORTING_BSORT_HPP

#include <iostream>
#include <array>

/**
 * THIS NEEDS TO BE PRIVATE
 * @tparam T
 * @param _n1
 * @param _n2
 */
template <class T>
void b_swap(T& _n1, T& _n2) {
    T temp = _n1;
    _n1 = _n2;
    _n2 = temp;
}

/**
 *
 * @tparam T
 * @param arr
 * @param N
 */
template <class T>
void bsort(T *arr, const size_t &N) {
    bool swapped;
    for(int i = 0; i < N; i++){
        swapped = false;
        for(int j = 0; j < N - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            std::cout << "Num of iterations: " << i << std::endl;
            break;
        }
    }
}

/**
 *
 * @tparam T
 * @tparam N
 * @param arr
 */
template <class T, size_t N>
void bsort(std::array<T, N> &arr) {
    bool swapped;
    for(int i = 0; i < arr.size(); i++){
        swapped = false;
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            std::cout << "Num of iterations: " << i << std::endl;
            break;
        }
    }
}

#endif //SORTING_BSORT_HPP
