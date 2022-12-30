/**
* @file
* @brief C++ program for maximum contiguous circular sum problem using [Kadane's Algorithm](https://en.wikipedia.org/wiki/Maximum_subarray_problem)
* @details
* The idea is to modify Kadane’s algorithm to find a minimum contiguous subarray sum and the maximum contiguous subarray sum,
* then check for the maximum value between the max_value and the value left after subtracting min_value from the total sum.
* [Geeks For Geeks](https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/)
*/

#include <cassert>   /// for assert
#include <iostream>   /// for IO operations    
using namespace std;  

int maxCircularSum(int a[], int n)
{
    // Edge Case
    if (n == 1)
        return a[0];
  
    // Sum variable which store total sum of the array.
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
  
    // Every variable stores first value of the array.
    int current_max = a[0], max_so_far = a[0], current_min = a[0], min_so_far = a[0];
  
    // Concept of Kadane's Algorithm
    for (int i = 1; i < n; i++) {
        // Kadane's Algorithm to find Maximum subarray sum.
        current_max = max(current_max + a[i], a[i]);
        max_so_far = max(max_so_far, current_max);
  
        // Kadane's Algorithm to find Minimum subarray sum.
        current_min = min(current_min + a[i], a[i]);
        min_so_far = min(min_so_far, current_min);
    }
  
    if (min_so_far == sum)
        return max_so_far;
  
    // returning the maximum value
    return max(max_so_far, sum - min_so_far);
}

/**
 * @brief Self-test implementations
 * @returns void
 */
static void test() {
    // description of the test
    // Input: arr[] = {8, -8, 9, -9, 10, -11, 12}
    // Output: 22 
    // Explanation: Subarray 12, 8, -8, 9, -9, 10 gives the maximum sum, that is 22.

    int n = 7; // size of the array
    int arr[7] = {8, -8, 9, -9, 10, -11, 12}; 
    assert(maxCircularSum(arr, n) == 22); // this ensures that the algorithm works as expected

    int arrr[7] = {8, -8, 10, -9, 10, -11, 12};
    assert(maxCircularSum(arrr, n) == 23);
}


int main(int argc, char *argv[]) {
     test();  // run self-test implementations
     return 0;
}
