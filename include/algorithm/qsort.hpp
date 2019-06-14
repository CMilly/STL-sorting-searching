//
// Created by cameron on 6/13/2019.
//

#ifndef SORTING_QSORT_HPP
#define SORTING_QSORT_HPP

#include <iostream>
#include <array>

template <class T>
void swap(T& _n1, T& _n2){
    T temp = _n1;
    _n1 = _n2;
    _n2 = temp;
}

template <class T, size_t N>
void qsort(std::array<T, N> &arr){

}

#endif //SORTING_QSORT_HPP
