/**
 * @file sparse_table.cpp
 * @brief Implementation of Sparse Table data structure
 *
 * @details
 * Sparse Table is a data structure, that allows answering range queries.
 * It can answer most range queries in O(logn), but its true power is answering range minimum queries
 * or equivalent range maximum queries). For those queries it can compute the answer in O(1) time.
 *
 * Running Time Complexity
 * Build : O(NlogN)
 * Range Query : O(1)
*/


#include<vector>
#include<iostream>
#include<algorithm>


/**
 * This function precomputes intial log table for further use.
 * @param n value of the size of the input array
 * @return corresponding vector of the log table
 */
std::vector<int> computeLogs(int n) {
    std::vector<int> logs(n+5);
    logs[1] = 0;
    for (int i = 2 ; i < n ; i++) {
        logs[i] = logs[i/2] + 1;
    }
    return logs;
}

/**
 * This functions builds the primary data structure Sparse Table
 * @param n value of the size of the input array
 * @param A array of the input integers
 * @param logs array of the log table
 * @return created sparse table data structure
 */
std::vector<std::vector<int> > buildTable(int n, const std::vector<int>& A, const std::vector<int>& logs) {
    std::vector<std::vector<int> > table(20, std::vector<int>(n+5, 0));
    int curLen = 0;
    for (int i = 0 ; i <= logs[n] ; i++) {
        curLen = 1 << i;
        for (int j = 0 ; j + curLen < n ; j++) {
            if (curLen == 1) {
                table[i][j] = A[j];
            }
            else {
                table[i][j] = std::min(table[i-1][j], table[i-1][j + curLen/2]);
            }
        }
    }
    return table;
}

/**
 * This function is the query function to get the range minimum value
 * @param beg begining index of the query range
 * @param end ending index of the query range
 * @param logs array of the log table
 * @param table sparse table data structure for the input array
 * @return minimum value for the [beg, end] range for the input array
 */
int getMinimum(int beg, int end, const std::vector<int>& logs, const std::vector<std::vector<int> >& table) {
    int p = logs[end - beg + 1];
    int pLen = 1 << p;
    return std::min(table[p][beg], table[p][end - pLen + 1]);
}


/**
 * Main function
 */
int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> A(n+5);
    for (int i = 0 ; i < n ; i++) {
        std::cin >> A[i];
    }
    std::vector<int> logs = computeLogs(n);
    std::vector<std::vector<int> >  table = buildTable(n, A, logs);
    std::cout << "Minimum of the range [3, 14]: " << getMinimum(2, 13, logs, table) << std::endl;
    return 0;
}
