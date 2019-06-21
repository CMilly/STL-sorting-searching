/**
 * Name: qsort.hpp
 * Description: Generic implementation of quicksort library for sorting
 * Author: Cameron Mims
 * Date (started): 6/18/19
 */

#ifndef SORTING_QSORT_HPP
#define SORTING_QSORT_HPP

#include <iostream>
#include <array>
#include <helpers.hpp>

/**
 * Establish a pivot based on the "Median-of-three"
 * @tparam T
 * @tparam N
 * @param arr
 * @param left
 * @param right
 * @return T pivot
 */
template <typename T, std::size_t N>
T med_three(std::array<T, N> &arr, std::size_t __left, std::size_t __right){
    T mid = (__left + __right) / 2;

    if(arr[__right] < arr[__left]){
        helpers::swap(arr[__left], arr[__right]);
    }
    if(arr[mid] < arr[__left]){
        helpers::swap(arr[mid], arr[__left]);
    }
    if(arr[__right] < arr[mid]){
        helpers::swap(arr[__right], arr[mid]);
    }
    return mid;
}

/**
 * Partition the given T *arr
 * @tparam T
 * @tparam N
 * @param arr
 * @param left
 * @param right
 * @return T partition (index)
 */
template <typename T>
T partition(T *arr, std::size_t __left, std::size_t __right){
    T pivot = arr[__right];
    T i_left = __left;
    T i_right = __right-1;

    for(;;){
        while(arr[i_right] > pivot) i_right--; //pseudo - While the number on the right is not greater than the pivot
        while(arr[i_left] < pivot) i_left++; //pseudo - While the number on the left is not less than the pivot

        //pseudo - Loop and increment until (stop) the number on the left is greater than the pivot, and loop and increment
        //until (stop) the number on the right is less than the pivot

        if(i_left <= i_right){ //pseudo - If the left index pointer is still less than or equal to the right index pointer, (swap)
            helpers::swap(arr[i_left], arr[i_right]); //swap the actual elements - arr[elem]
        }else{
            break;
        }
    }

    //pseudo - If broken out of loop, left pointer exceeded right pointer
    //Establish the partition (i_left) and swap the temporary pivot (arr[right]) with the partition
    helpers::swap(arr[__right], arr[i_left]);

    //Return partition
    return i_left;
}

/**
 * Partition the given std::array<T,N>
 * @tparam T
 * @tparam N
 * @param arr
 * @param left
 * @param right
 * @return T partition (index)
 */
template <typename T, std::size_t N>
T partition(std::array<T, N> &arr, std::size_t __left, std::size_t __right){
    T pivot = arr[__right];
    T i_left = __left;
    T i_right = __right-1;

    for(;;){
        while(arr[i_right] > pivot) i_right--; //pseudo - While the number on the right is not greater than the pivot
        while(arr[i_left] < pivot) i_left++; //pseudo - While the number on the left is not less than the pivot

        //pseudo - Loop and increment until (stop) the number on the left is greater than the pivot, and loop and increment
        //until (stop) the number on the right is less than the pivot

        if(i_left <= i_right){ //pseudo - If the left index pointer is still less than or equal to the right index pointer, (swap)
            helpers::swap(arr[i_left], arr[i_right]); //swap the actual elements - arr[elem]
        }else{
            break;
        }
    }

    //pseudo - If broken out of loop, left pointer exceeded right pointer
    //Establish the partition (i_left) and swap the temporary pivot (arr[right]) with the partition
    helpers::swap(arr[__right], arr[i_left]);

    //Return partition
    return i_left;
}

/**
 * Take in a T *arr and begin the quicksort process
 * @tparam T
 * @param arr
 * @param left
 * @param right
 */
template <typename T>
void qsort(T *arr, std::size_t __left, std::size_t __right){
    //pseudo - If our left pointer has exceeded our right pointer
    //We know that for our given array, it has been partitioned to its fullest
    if(__left >= __right){
        return;
    }
    T p = partition(arr, __left, __right);
    qsort(arr, __left, p - 1);
    qsort(arr, p + 1, __right);
}

/**
 * Take in a std::array<T,N> and begin the quicksort process
 * @tparam T
 * @tparam N
 * @param arr
 * @param left
 * @param right
 */
template <typename T, std::size_t N>
void qsort(std::array<T, N> &arr, std::size_t __left, std::size_t __right){
    //pseudo - If our left pointer has exceeded our right pointer
    //We know that for our given array, it has been fully partitioned
    if(__left >= __right){
        return;
    }
    T p = partition(arr, __left, __right);
    qsort(arr, __left, p - 1);
    qsort(arr, p + 1, __right);
}

#endif //SORTING_QSORT_HPP
