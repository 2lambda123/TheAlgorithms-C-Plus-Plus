/**
 * @file
 * @brief Evaluation of Postfix Expression
 * @author [Darshana Sarma](https://github.com/Darshana-Sarma)
 * @details
 * Create a stack to store operands (or values).
 * Scan the given expression and do following for every scanned element.
 * If the element is a number, push it into the stack
 * If the element is a operator, pop operands for the operator from stack.
 * Evaluate the operator and push the result back to the stack
 * When the expression is ended, the number in the stack is the final answer
 */
#include <algorithm>  // for all_of
#include <array>      // for std::array
#include <cassert>    // for assert
#include <iostream>   // for io operations
#include <string>     // for stof

class Stack {
 public:
    std::array<float, 20> stack;
    int stackTop = -1;
};

/**
 * @brief Pushing operand, also called the number in the array to the stack
 * @param operand float value from the input array or evaluation
 * @param stack stack containing numbers
 * @returns none
 */
void push(float operand, Stack &stack) {
    stack.stackTop++;
    stack.stack[stack.stackTop] = operand;
}

/**
 * @brief Popping operand, also called the number from the stack
 * @param stack stack containing numbers
 * @returns operand float on top of stack
 */
float pop(Stack &stack) {
    float operand = stack.stack[stack.stackTop];
    stack.stackTop--;
    return operand;
}

/**
 * @brief Checks if scanned string is a number
 * @param s scanned string
 * @returns bool boolean value if string is number
 */
bool is_number(const std::string &s) {
    return !s.empty() && std::all_of(s.begin(), s.end(), ::isdigit);
}

/**
 * @brief Evaluate answer using given operands and operation
 * @param a float
 * @param b float
 * @param operation operation to be performed with respective floats
 * @param stack stack containing numbers
 * @returns none
 */
void evaluate(float a, float b, const std::string &operation, Stack &stack) {
    float c = 0;
    const char *op = operation.c_str();
    switch (*op) {
        case '+':
            c = a + b;
            push(c, stack);
            break;

        case '-':
            c = a - b;
            push(c, stack);
            break;

        case '*':
            c = a * b;
            push(c, stack);
            break;

        case '/':
            c = a / b;
            push(c, stack);
            break;

        default:
            std::cout << "Operator not defined\n";
            break;
    }
}

/**
 * @brief Postfix Evaluation algorithm to compute the value from given input
 * array
 * @param input Array of characters consisting of numbers and operations
 * @param N Array size
 * @returns stack[stackTop] returns the top value from the stack
 */
template <std::size_t N>
float postfix_evaluation(std::array<std::string, N> input) {
    Stack stack;
    int j = 0;

    while (j < N) {
        std::string scan = input[j];
        if (is_number(scan)) {
            push(std::stof(scan), stack);

        } else {
            float op2 = pop(stack);
            float op1 = pop(stack);

            evaluate(op1, op2, scan, stack);
        }
        j++;
    }

    std::cout << stack.stack[stack.stackTop] << "\n";

    return stack.stack[stack.stackTop];
}

/**
 * @brief Test function 1 with input array
 * {'2', '3', '1', '*', '+', '9', '-'}
 * @returns none
 */
static void test_function_1() {
    std::array<std::string, 7> input = {"2", "3", "1", "*", "+", "9", "-"};

    float answer = postfix_evaluation(input);

    assert(answer == -4);
}

/**
 * @brief Test function 2 with input array
 * {'1', '2', '+', '2', '/', '5', '*', '7', '+'}
 * @returns none
 */
static void test_function_2() {
    std::array<std::string, 9> input = {"100", "200", "+", "2", "/",
                                        "5",   "*",   "7", "+"};
    float answer = postfix_evaluation(input);

    assert(answer == 757);
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    test_function_1();
    test_function_2();

    return 0;
}
