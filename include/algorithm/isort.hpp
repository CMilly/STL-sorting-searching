/**
 * Name: isort.hpp
 * Description: Generic implementation of insertion sort library for sorting
 * Author: Cameron Mims
 * Date (started): 6/18/19
 */

#ifndef SORTING_ISORT_HPP
#define SORTING_ISORT_HPP

#include <iostream>
#include <array>
#include <util.hpp>

/**
 * Take in a T *arr and begin the insertion sort process
 * @tparam T
 * @param arr
 * @param __N
 */
template <typename T>
void isort(T *arr, std::size_t __N){
    //pseudo: loop from "i" to "N"
    for(int i = 0; i < __N; i++){
        int j = i; //pseudo: set j as our reference for insertion

        //pseudo: while j is greater than 0 and element at j is less than
        //the previous element, continue looping
        while((j > 0) && (arr[j] < arr[j-1])){
            util::swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

/**
 * Take in a std::array<T, __N> and begin the insertion sort process
 * @tparam T
 * @tparam __N
 * @param arr
 */
template <typename T, std::size_t __N>
void isort(std::array<T,__N> &arr){
    //pseudo: loop from "i" to "N"
    for(int i = 0; i < arr.size(); i++){
        int j = i; //pseudo: set j as our reference for insertion

        //pseudo: while j is greater than 0 and element at j is less than
        //the previous element, continue looping
        while((j > 0) && (arr[j] < arr[j-1])){
            util::swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

#endif //SORTING_ISORT_HPP
