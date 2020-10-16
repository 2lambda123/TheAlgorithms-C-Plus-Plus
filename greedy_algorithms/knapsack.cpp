/**
 * @file
 * @brief [Eight Queens](https://en.wikipedia.org/wiki/Knapsack_problem)
 *
 * @details
 * Given a set of items, each with a weight and a value, determine the number of
 * each item to include in a collection so that the total weight is less than or
 * equal to a given limit and the total value is as large as possible.
 *
 * @author Unknown author
 * @author [Krishna Vedala](https://github.com/kvedala)
 */
#include <cmath>
#include <iostream>
#include <vector>

/**
 * @namespace greedy_algorithms
 * @brief greedy algorithms
 */
namespace greedy_algorithms {

/**
 * @namespace knapsack
 * @brief Functions for [Knapsack
 * Problem](https://en.wikipedia.org/wiki/Knapsack_problem).
 */
namespace knapsack {

/**
 * Structure defining the weight and profit of an Item.
 */
struct Item {
    int weight;
    int profit;
};

/**
 * Utility funtion that return Profit per unit
 * @param x unit/element
 */
float profitPerUnit(const Item &x) {
    return static_cast<float>(x.profit) / static_cast<float>(x.weight);
}

/**
 * Funtion that partition the array
 * @param arr Array to be sorted
 * @param low Starting index
 * @param high Ending index
 */
int partition(std::vector<Item> arr, int low, int high) {
    Item pivot = arr[high];  // pivot
    int i = (low - 1);       // Index of smaller element

    for (int j = low; j < high; j++) {
        // If current element is smaller than or
        // equal to pivot
        if (profitPerUnit(arr[j]) <= profitPerUnit(pivot)) {
            i++;  // increment index of smaller element
            Item temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    Item temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

/**
 * The function that implements QuickSort
 * @param arr Array to be sorted
 * @param low Starting index
 * @param high Ending index
 */
void quickSort(std::vector<Item> arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

}  // namespace knapsack
}  // namespace greedy_algorithms

using greedy_algorithms::knapsack::Item;
using greedy_algorithms::knapsack::quickSort;

int main() {
    std::cout << "\nEnter the capacity of the knapsack : ";
    float capacity;
    std::cin >> capacity;
    std::cout << "\n Enter the number of Items : ";
    int n = 0;
    std::cin >> n;
    std::vector<Item> itemArray(n);
    for (int i = 0; i < n; i++) {
        std::cout << "\nEnter the weight and profit of item " << i + 1 << " : ";
        std::cin >> itemArray[i].weight;
        std::cin >> itemArray[i].profit;
    }

    quickSort(itemArray, 0, n - 1);

    // show(itemArray, n);

    float maxProfit = 0;
    int i = n;
    while (capacity > 0 && --i >= 0) {
        if (capacity >= static_cast<float>(itemArray[i].weight)) {
            maxProfit += static_cast<float>(itemArray[i].profit);
            capacity -= static_cast<float>(itemArray[i].weight);
            std::cout << "\n\t" << itemArray[i].weight << "\t"
                      << itemArray[i].profit;
        } else {
            maxProfit += profitPerUnit(itemArray[i]) * capacity;
            std::cout << "\n\t" << capacity << "\t"
                      << profitPerUnit(itemArray[i]) * capacity;
            break;
        }
    }

    std::cout << "\nMax Profit : " << maxProfit;

    return 0;
}
