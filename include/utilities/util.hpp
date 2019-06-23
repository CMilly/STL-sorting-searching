/**
 * Name: helpers.hpp
 * Description: Helper library for sorting and searching
 * Author: Cameron Mims
 * Date (started): 6/18/19
 */

#ifndef SORTING_UTIL_HPP
#define SORTING_UTIL_HPP

namespace util{
    /**
     * Swap two given elements
     * @tparam T
     * @param __n1
     * @param __n2
     */
    template <typename T>
    void swap(T &__n1, T& __n2){
        T temp = __n1;
        __n1 = __n2;
        __n2 = temp;
    }
}

#endif //SORTING_UTIL_HPP
