/**
 * Name: bsort.hpp
 * Description: Generic implementation of bubble sort library for sorting
 * Author: Cameron Mims
 * Date (started): 6/18/19
 */

#ifndef SORTING_BSORT_HPP
#define SORTING_BSORT_HPP

#include <iostream>
#include <array>
#include <util.hpp>

/**
 * Take in an array and begin the bsort process
 * @tparam T
 * @param arr
 * @param N
 */
template <class T>
void bsort(T *arr, const std::size_t &N) {
    bool swapped; //flag for early break of loop (resulting in better Time Complexity)
    for(int i = 0; i < N; i++){
        swapped = false;

        //Through each iteration, "shrink" the array based upon i
        for(int j = 0; j < N - i - 1; j++){
            if(arr[j] > arr[j+1]){
                util::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        //If not true
        if(!swapped){
            std::cout << "Num of iterations: " << i << std::endl;
            break;
        }
    }
}

/**
 * Take in an array and begin the bsort process
 * @tparam T
 * @tparam N
 * @param arr
 */
template <class T, size_t N>
void bsort(std::array<T, N> &arr) {
    bool swapped; //flag for early break of loop (resulting in better Time Complexity)
    for(int i = 0; i < arr.size(); i++){
        swapped = false;

        //Through each iteration, "shrink" the array based upon i
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j+1]){
                util::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        //If not true
        if(!swapped){
            std::cout << "Num of iterations: " << i << std::endl;
            break;
        }
    }
}

#endif //SORTING_BSORT_HPP
