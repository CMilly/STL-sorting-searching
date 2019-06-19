//
// Created by cameron on 6/19/2019.
//

#ifndef SORTING_SLCSORT_HPP
#define SORTING_SLCSORT_HPP

#include <iostream>
#include <array>
#include <helpers.hpp>

/**
 *
 * @tparam T
 * @param arr
 * @param N
 */
template<typename T>
void slcsort(T *arr, const std::size_t N){
    for(int i = 0; i < N; i++){
        T min = i;
        for(int j = i + 1; j < N; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        helpers::swap(arr[min], arr[i]);
    }
}

/**
 *
 * @tparam T
 * @tparam N
 * @param arr
 */
template <typename T, std::size_t N>
void slcsort(std::array<T,N> &arr){
    for(int i = 0; i < arr.size(); i++){
        T min = i;
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        helpers::swap(arr[min], arr[i]);
    }
}

#endif //SORTING_SLCSORT_HPP
