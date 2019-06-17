//
// Created by cameron on 6/13/2019.
//

#ifndef SORTING_QSORT_HPP
#define SORTING_QSORT_HPP

#include <iostream>
#include <array>

/**
 *
 * @tparam T
 * @param _n1
 * @param _n2
 */
template <typename T>
void q_swap(T& _n1, T& _n2){
    T temp = _n1;
    _n1 = _n2;
    _n2 = temp;
}

/**
 *
 * @tparam T
 * @tparam N
 * @param arr
 * @param left
 * @param right
 * @return
 */
template <typename T, std::size_t N>
T med_three(std::array<T, N> &arr, std::size_t left, std::size_t right){
    T mid = (left + right) / 2;

    if(arr[right] < arr[left]){
        q_swap(arr[left], arr[right]);
    }
    if(arr[mid] < arr[left]){
        q_swap(arr[mid], arr[left]);
    }
    if(arr[right] < arr[mid]){
        q_swap(arr[right], arr[mid]);
    }
    return mid;
}

/**
 *
 * @tparam T
 * @tparam N
 * @param arr
 * @param left
 * @param right
 * @return
 */
template <typename T, std::size_t N>
std::size_t partition(std::array<T, N> &arr, std::size_t left, std::size_t right){
    T pivot = med_three(arr, left, right);

    for(;;){
        while(arr[right--] > pivot);
        while(arr[left++] < pivot);
        if(left >= right){
            break;
        }else{
            q_swap(arr[left], arr[right]);
        }
    }
    q_swap(arr[pivot], arr[left]);
    return left;
}

/**
 *
 * @tparam T
 * @tparam N
 * @param arr
 * @param left
 * @param right
 */
template <typename T, std::size_t N>
void qsort(std::array<T, N> &arr, std::size_t left, std::size_t right){
    std::cout << arr[0] << std::endl;
    if(left >= right){
        return;
    }
    std::size_t p = partition(arr, left, right);
    qsort(arr, left, p - 1);
    qsort(arr, p + 1, right);
}

#endif //SORTING_QSORT_HPP
