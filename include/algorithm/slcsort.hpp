/**
 * Name: slcsort.hpp
 * Description: Generic implementation of selection sort library for sorting
 * Author: Cameron Mims
 * Date (started): 6/18/19
 */

#ifndef SORTING_SLCSORT_HPP
#define SORTING_SLCSORT_HPP

#include <iostream>
#include <array>
#include <helpers.hpp>

/**
 * Take in a T *arr and begin the selection sort process
 * @tparam T
 * @param arr
 * @param N
 */
template<typename T>
void slcsort(T *arr, const std::size_t __N){
    for(int i = 0; i < __N; i++){
        T min = i; //pseudo: set our min to the beginning of the array 'i'

        //pseudo: loop from after i to N
        for(int j = i + 1; j < __N; j++){
            //pseudo: if arr[j] is less than arr[min], our min will not represent that element or 'T'
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        //pseudo: Once we have looped through all elements in arr
        //Min has been established, and swap with 'i'
        helpers::swap(arr[min], arr[i]);
    }
}

/**
 * Take in a std::array<T,N> and begin the selection sort process
 * @tparam T
 * @tparam N
 * @param arr
 */
template <typename T, std::size_t __N>
void slcsort(std::array<T,__N> &arr){
    for(int i = 0; i < arr.size(); i++){
        T min = i; //pseudo: set our min to the beginning of the array 'i'

        //pseudo: loop from after i to N
        for(int j = i + 1; j < arr.size(); j++){
            //pseudo: if arr[j] is less than arr[min], our min will not represent that element or 'T'
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        //pseudo: Once we have looped through all elements in arr
        //Min has been established, and swap with 'i'
        helpers::swap(arr[min], arr[i]);
    }
}

#endif //SORTING_SLCSORT_HPP
