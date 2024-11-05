/**
 * @file AdaptiveMergeSort.cpp
 * @brief Implementation of the Adaptive Merge Sort algorithm in C++.
 *
 * @details This file contains the implementation of the Adaptive Merge Sort algorithm.
 * The algorithm is a stable, divide-and-conquer based sorting algorithm.
 *
 * @tparam T Type of elements to be sorted.
 * @see https://medium.com/@kaweendra/the-ultimate-sorting-algorithm-6513d6968420
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <string>

/**
 * @brief Function to merge two halves of an array
 * @tparam T Type of elements to be sorted
 * @param array Vector of elements to be sorted
 * @param aux Auxiliary vector used for merging
 * @param low Starting index
 * @param mid Midpoint index
 * @param high Ending index
 */
template <typename T>
void merge(std::vector<T>& array, std::vector<T>& aux, int low, int mid, int high) {
    std::copy(array.begin() + low, array.begin() + high + 1, aux.begin() + low);
    int i = low;
    int j = mid + 1;
    for (int k = low; k <= high; ++k) {
        if (i > mid) {
            array[k] = aux[j++];
        } else if (j > high) {
            array[k] = aux[i++];
        } else if (aux[j] < aux[i]) {
            array[k] = aux[j++];
        } else {
            array[k] = aux[i++];
        }
    }
}

/**
 * @brief Function to recursively sort an array using Adaptive Merge Sort
 * @tparam T Type of elements to be sorted
 * @param array Vector of elements to be sorted
 * @param aux Auxiliary vector used for merging
 * @param low Starting index
 * @param high Ending index
 */
template <typename T>
void sort(std::vector<T>& array, std::vector<T>& aux, int low, int high) {
    if (low >= high) return;
    int mid = low + (high - low) / 2;
    sort(array, aux, low, mid);
    sort(array, aux, mid + 1, high);
    merge(array, aux, low, mid, high);
}

/**
 * @brief Function to sort an array using Adaptive Merge Sort algorithm
 * @tparam T Type of elements to be sorted
 * @param array Vector of elements to be sorted
 * @return Vector of sorted elements
 */
template <typename T>
std::vector<T> adaptiveMergeSort(std::vector<T> array) {
    if (array.size() <= 1) return array;
    std::vector<T> aux(array.size());
    sort(array, aux, 0, array.size() - 1);
    return array;
}

/**
 * @brief Unit tests for the AdaptiveMergeSort algorithm
 */
void testAdaptiveMergeSort() {
    // Test Integer Input
    std::vector<int> integers = {4, 23, 6, 78, 1, 54, 231, 9, 12};
    std::vector<int> expectedIntegers = {1, 4, 6, 9, 12, 23, 54, 78, 231};
    assert(adaptiveMergeSort(integers) == expectedIntegers);

    // Test String Input
    std::vector<std::string> strings = {"c", "a", "e", "b", "d"};
    std::vector<std::string> expectedStrings = {"a", "b", "c", "d", "e"};
    assert(adaptiveMergeSort(strings) == expectedStrings);

    // Test with duplicates
    std::vector<int> duplicates = {1, 3, 2, 2, 5, 4};
    std::vector<int> expectedDuplicates = {1, 2, 2, 3, 4, 5};
    assert(adaptiveMergeSort(duplicates) == expectedDuplicates);

    // Test empty array
    std::vector<int> empty = {};
    std::vector<int> expectedEmpty = {};
    assert(adaptiveMergeSort(empty) == expectedEmpty);

    // Test single element
    std::vector<int> single = {42};
    std::vector<int> expectedSingle = {42};
    assert(adaptiveMergeSort(single) == expectedSingle);
    
    // Test negative numbers
    std::vector<int> negatives = {-3, -1, -7, -4, -6, -2, -5};
    std::vector<int> expectedNegatives = {-7, -6, -5, -4, -3, -2, -1};
    assert(adaptiveMergeSort(negatives) == expectedNegatives);

    std::cout << "All AdaptiveMergeSort tests passed!" << std::endl;
}

int main() {
    testAdaptiveMergeSort();
    return 0;
}
