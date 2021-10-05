/**
 * @file
 * @brief
 * Implementation of [Prefix Sum
 * Array](https://en.wikipedia.org/wiki/Prefix_sum) data structure.
 *
 * @details
 * Prefix Sum Array is a data structure, that allows answering sum in some range
 * queries. It can answer most sum range queries in O(1), with a build time
 * complexity of O(N). But it hasn't an update querie.
 *
 * * Running Time Complexity \n
 * * Build : O(N) \n
 * * Range Query : O(1) \n
 */

#include <cassert>   // for assert function
#include <iostream>  // for IO operations
#include <vector>    // for using the STL vector data structure

/**
 * @namespace range_queries
 * @brief Range Queries algorithms
 */
namespace range_queries {
/**
 * @namespace prefix_sum_array
 * @brief Range sum queries using prefix-sum-array
 */
namespace prefix_sum_array {

std::vector<int> PSA(1, 0);

/**
 * @brief function that builds the PSA
 */
void build(std::vector<int> original_array) {
    for (int i = 1; i <= static_cast<int>(original_array.size()); i++) {
        PSA.push_back(PSA[i - 1] + original_array[i]);
    }
}
/**
 * @brief query function
 * @returns sum of the range [a, b]
 */
int query(int beg, int end) { return PSA[end] - PSA[beg - 1]; }
}  // namespace prefix_sum_array
}  // namespace range_queries

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    std::vector<int> values{0,  123, 0,  2,  -2, 5,
                            24, 0,   23, -1, -1};  // original array

    range_queries::prefix_sum_array::build(values);
    // queries are of the type: sum of the range [a, b] = psa[b] - psa[a-1]

    assert(range_queries::prefix_sum_array::query(1, 10) ==
           173);  // sum of the entire array
    assert(range_queries::prefix_sum_array::query(4, 6) ==
           27);  // the sum of the interval [4, 6]
    assert(range_queries::prefix_sum_array::query(5, 9) ==
           51);  // the sum of the interval [5, 9]

    return 0;
}
