/**
 * @file
 * @brief [Gale Shapley Algorithm](https://en.wikipedia.org/wiki/Gale%E2%80%93Shapley_algorithm)
 * @details
 * This implementation utilizes the Gale-Shapley algorithm to find stable matches.
 *
 * **Gale Shapley Algorithm** aims to find a stable matching between two equally sized 
 * sets of elements given an ordinal preference for each element. The algorithm was
 * introduced by David Gale and Lloyd Shapley in 1962.
 * 
 * Reference: 
 * [Wikipedia](https://en.wikipedia.org/wiki/Gale%E2%80%93Shapley_algorithm)
 * [Wikipedia](https://en.wikipedia.org/wiki/Stable_matching_problem)
 *
 * @author [B Karthik](https://github.com/BKarthik7)
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

/**
 * @namespace
 * @brief Greedy Algorithms
 */
namespace greedy_algorithms {
/**
 * @namespace
 * @brief Functions for the Gale-Shapley Algorithm
 */

/**
 * @brief The main function that finds the stable matching between two sets of elements 
 * using the Gale-Shapley Algorithm.
 * @note This doesn't work on negative preferences. the preferences should be continuous integers starting from 
 * 0 to number of preferences - 1.
 * @param primary_preferences the preferences of the primary set should be a 2D vector
 * @param secondary_preferences the preferences of the secondary set should be a 2D vector
 * @returns matches the stable matching between the two sets
 */

namespace stable_matching {
std::vector<unsigned int> gale_shapley(const std::vector<std::vector<unsigned int>>& secondary_preferences, const std::vector<std::vector<unsigned int>>& primary_preferences) {
    unsigned int num_elements = secondary_preferences.size();
    std::vector<unsigned int> matches(num_elements, -1);
    std::vector<bool> is_free_primary(num_elements, true);
    std::vector<unsigned int> proposal_index(num_elements, 0); // Tracks the next secondary to propose for each primary

    while (true) {
        int free_primary_index = -1;

        // Find the next free primary
        for (unsigned int i = 0; i < num_elements; i++) {
            if (is_free_primary[i]) {
                free_primary_index = i;
                break;
            }
        }

        // If no free primary is found, break the loop
        if (free_primary_index == -1) break;

        // Get the next secondary to propose
        unsigned int secondary_to_propose = primary_preferences[free_primary_index][proposal_index[free_primary_index]];
        proposal_index[free_primary_index]++;

        // Get the current match of the secondary
        unsigned int current_match = matches[secondary_to_propose];

        // If the secondary is free, match them
        if (current_match == -1) {
            matches[secondary_to_propose] = free_primary_index;
            is_free_primary[free_primary_index] = false;
        } else {
            // Determine if the current match should be replaced
            auto new_proposer_rank = std::find(secondary_preferences[secondary_to_propose].begin(),
                                                secondary_preferences[secondary_to_propose].end(),
                                                free_primary_index);
            auto current_match_rank = std::find(secondary_preferences[secondary_to_propose].begin(),
                                                 secondary_preferences[secondary_to_propose].end(),
                                                 current_match);

            // If the new proposer is preferred over the current match
            if (new_proposer_rank < current_match_rank) {
                matches[secondary_to_propose] = free_primary_index;
                is_free_primary[free_primary_index] = false;
                is_free_primary[current_match] = true; // Current match is now free
            }
        }
    }

    return matches;
}
}  // namespace stable_matching
}  // namespace greedy_algorithms

/**
 * @brief Self-test implementations
 * @returns void
 */
static void tests() {
    // Test Case 1
    std::vector<std::vector<unsigned int>> primary_preferences = {{0, 1, 2, 3}, {2, 1, 3, 0}, {1, 2, 0, 3}, {3, 0, 1, 2}};
    std::vector<std::vector<unsigned int>> secondary_preferences = {{1, 0, 2, 3}, {3, 0, 1, 2}, {0, 2, 1, 3}, {1, 2, 0, 3}};
    assert(greedy_algorithms::stable_matching::gale_shapley(secondary_preferences, primary_preferences) == std::vector<unsigned int>({0, 2, 1, 3}));

    // Test Case 2
    primary_preferences = {{0, 2, 1, 3}, {2, 3, 0, 1}, {3, 1, 2, 0}, {2, 1, 0, 3}};
    secondary_preferences = {{1, 0, 2, 3}, {3, 0, 1, 2}, {0, 2, 1, 3}, {1, 2, 0, 3}};
    assert(greedy_algorithms::stable_matching::gale_shapley(secondary_preferences, primary_preferences) == std::vector<unsigned int>({0, 3, 1, 2}));

    // Test Case 3
    primary_preferences = {{0, 1, 2}, {2, 1, 0}, {1, 2, 0}};
    secondary_preferences = {{1, 0, 2}, {2, 0, 1}, {0, 2, 1}};
    assert(greedy_algorithms::stable_matching::gale_shapley(secondary_preferences, primary_preferences) == std::vector<unsigned int>({0, 2, 1}));

    // Test Case 4
    primary_preferences = {};
    secondary_preferences = {};
    assert(greedy_algorithms::stable_matching::gale_shapley(secondary_preferences, primary_preferences) == std::vector<unsigned int>({}));
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    tests(); // Run self-test implementations
    return 0;
}