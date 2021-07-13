/*
 * @brief [Magic sequence](https://www.csplib.org/Problems/prob019/)
 * implementation
 *
 * @details Solve the magic sequence problem with a backtraking
 *
 * "A magic sequence of length $n$ is a sequence of integers $x_0
 * \ldots x_{n-1}$ between $0$ and $n-1$, such that for all $i$
 * in $0$ to $n-1$, the number $i$ occurs exactly $x_i$ times in
 * the sequence. For instance, $6,2,1,0,0,0,1,0,0,0$ is a magic
 * sequence since $0$ occurs $6$ times in it, $1$ occurs twice, etc."
 * Quote taken from the [CSPLib](https://www.csplib.org/Problems/prob019/) website
 *
 * @author [Jxtopher](https://github.com/jxtopher)
 */

#include <algorithm>  /// for std::count
#include <cassert>    /// for assert
#include <iostream>   /// for IO operations
#include <list>       /// for std::list
#include <numeric>    /// for std::accumulate
#include <vector>     /// for std::vector

/**
 * @namespace backtracking
 * @brief Backtracking algorithms
 */
namespace backtracking {

/**
 * @namespace magic_sequence
 * @brief Functions for the [Magic sequence](https://www.csplib.org/Problems/prob019/) implementation
 */
namespace magic_sequence {
using sequence_t = std::vector<unsigned int>;

/**
 * @brief print a magic sequence
 * @param s a magic sequence
 */
void print(const sequence_t& s) {
    for (const auto& item : s) std::cout << item << " ";
    std::cout << std::endl;
}

/**
 * @brief Check if the sequence is magic
 * @param s a magic sequence
 * @return true if is a magic sequence
 * @return false otherwise
 *
 */
bool is_magic(const sequence_t& s) {
    for (unsigned int i = 0; i < s.size(); i++) {
        if (std::count(s.cbegin(), s.cend(), i) != s[i]) {
            return false;
        }
    }
    return true;
}

/**
 * @brief Sub-solutions filtering
 *
 * @param s a magic sequence
 * @param depth
 * @return true if the sub-solution is valid
 * @return false otherwise
 */
bool filtering(const sequence_t& s, unsigned int depth) {
    return std::accumulate(s.cbegin(), s.cbegin() + depth,
                           static_cast<unsigned int>(0)) <= s.size();
}

/**
 * @brief Solve the Magic Sequence problem
 *
 * @param s a magic sequence
 * @param ret list of valid magic sequences
 * @param depth depth in the tree
 */
void solve(sequence_t* s, std::list<sequence_t>* ret, unsigned int depth = 0) {
    if (depth == s->size()) {
        if (is_magic(*s)) {
            ret->push_back(*s);
        }
    } else {
        for (unsigned int i = 0; i < s->size(); i++) {
            (*s)[depth] = i;
            if (filtering(*s, depth + 1)) {
                solve(s, ret, depth + 1);
            }
        }
    }
}

}  // namespace magic_sequence
}  // namespace backtracking

/**
 * @brief Self-test implementations
 * @returns void
 */
static void test() {
    // test a valid magic sequence
    backtracking::magic_sequence::sequence_t s_magic = {6, 2, 1, 0, 0,
                                                        0, 1, 0, 0, 0};
    assert(backtracking::magic_sequence::is_magic(s_magic));

    // test a not valid magic sequence
    backtracking::magic_sequence::sequence_t s_not_magic = {5, 2, 1, 0, 0,
                                                            0, 1, 0, 0, 0};
    assert(!backtracking::magic_sequence::is_magic(s_not_magic));
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    test();  // run self-test implementations

    // solve magic sequences of size 2 to 11 and print the solutions
    for (unsigned int i = 2; i < 12; i++) {
        std::cout << "Solution for n = " << i << std::endl;
        std::list<backtracking::magic_sequence::sequence_t> r1;
        backtracking::magic_sequence::sequence_t s1(i, i);
        backtracking::magic_sequence::solve(&s1, &r1);
        for (const auto& item : r1) backtracking::magic_sequence::print(item);
    }
}
