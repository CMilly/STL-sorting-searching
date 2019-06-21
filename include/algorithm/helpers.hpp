/**
 * Name: helpers.hpp
 * Description: Helper library for sorting and searching
 * Author: Cameron Mims
 * Date (started): 6/18/19
 */

#ifndef SORTING_HELPERS_HPP
#define SORTING_HELPERS_HPP

namespace helpers{
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

#endif //SORTING_HELPERS_HPP
