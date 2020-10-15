/**
 *  \addtogroup sorting Sorting Algorithms
 *  @{
 *  \file
 *  \brief [Wiggle Sort Algorithm]
 *  (https://khanhng.com/post/wiggle-sort/) Implementation
 *
 *  \author [Roshan Kanwar](http://github.com/roshan0708)
 *
 *  \details
 *  Wiggle Sort sorts the array into a wave like array.
 *  An array ‘arr[0..n-1]’ is sorted in wave form,
 *  if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
 *
 *  \example
 *  arr = [1,1,5,6,1,4], after wiggle sort arr will become equal to [1,1,6,1,5,4]
 *  arr = [2,8,9,1,7], after wiggle sort arr will become equal to [8,2,9,1,7]
 */

#include <iostream>

class Algorithm {

   public:

/**
 *
 *  @brief Used for swapping two numbers.
 *
 *  @param x first number
 *  @param y second number
 *
 */

   void swap(int *x, int *y) {

       int temp = *x;
       *x = *y;
       *y = temp;

   }

/**
 *
 *  @brief Utility function used for printing the elements.
 *  Prints elements of the array after they're sorted using wiggle sort algorithm.
 *
 *  @param arr array containing the sorted elements
 *  @param size - size of the input array
 *
 */

   void displayElements(int *arr,int size) {

       std::cout << "Sorted elements are as follows: ";

       std::cout << "[";

       for(int i = 0 ; i < size ; i++ ) {
           
           std::cout << arr[i] ;
           if(i != size - 1) {
               std::cout << ", " ;
           }

       }

       std::cout << "]"<<std::endl;

   }

 /**
  *
  * @brief Function used for sorting the elements in wave form.
  * @details
  * Checking whether the even indexed elements are greater than
  * their adjacent odd elements.
  * Traversing all even indexed elements of the input arr.
  * If current element is smaller than the previous odd element, swap them.
  * If current element is smaller than the next odd element, swap them.
  *
  * @param arr input array (unsorted elements)
  * @param size - size of the input array
  *
  */   

   void wiggleSort(int *arr, int size) {

       for(int i = 0; i < size ; i +=2) {

           if(i > 0 && arr[i-1] > arr[i]) {
               swap(arr+i,arr+i-1);
           }

           if(i < size - 1 && arr[i] < arr[i+1]) {
               swap(arr+i,arr+i+1);
           }

       }

   }
};

/**
 * @brief Main function
 * @returns 0 on exit
 */

int main() {

    int size;

    std::cout << "Enter the number of elements : ";

    std::cin >> size;

    int *arr = new int[size];

    std::cout << "Enter the unsorted elements : ";

    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    Algorithm ob;
    (ob.wiggleSort(arr,size));
    (ob.displayElements(arr,size));
    delete[] arr;
    return 0;
}

/** @} */
