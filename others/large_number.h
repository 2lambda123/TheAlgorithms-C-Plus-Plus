/**
 * @author Krishna Vedala
 * @email krishna (dot) vedala (at) ieee (dot) org
 **/

#ifndef __LARGE_NUMBER__
#define __LARGE_NUMBER__
#include <type_traits>
#include <iostream>
#include <cassert>
#include <cstring>
#include <vector>

/**
 * Store large unsigned numbers as a C++ vector
 * The class provides convenience functions to add a
 * digit to the number, perform multiplication of
 * large number with long unsigned integers.
 **/
class large_number
{
public:
    large_number() /**< initializer with value = 1 */
    {
        _digits.push_back(1);
    }

    large_number(unsigned long n) /**< initializer from an integer */
    {
        unsigned long carry = n;
        do
        {
            add_digit(carry % 10);
            carry /= 10;
        } while (carry != 0);
    }

    large_number(const large_number &a) /**< initializer from another large_number */
    {
        _digits = a._digits;
    }

    large_number(const std::vector<unsigned char> &vec) /**< initializer from a vector */
    {
        _digits = vec;
    }

    large_number(const char *number_str) /**< initializer from a string */
    {
        for (size_t i = strlen(number_str); i > 0; i--)
            _digits.push_back(number_str[i - 1] - '0');
    }

    /**
     * Function to check implementation
     **/
    static bool test()
    {
        std::cout << "------ Checking `large_number` class implementations\t" << std::endl;
        large_number a(40);
        // 1. test multiplication
        a *= 10;
        if (a != large_number(400))
        {
            std::cerr << "\tFailed 1/6 (" << a << "!=400)" << std::endl;
            return false;
        }
        std::cout << "\tPassed 1/6...";
        // 2. test compound addition with integer
        a += 120;
        if (a != large_number(520))
        {
            std::cerr << "\tFailed 2/6 (" << a << "!=520)" << std::endl;
            return false;
        }
        std::cout << "\tPassed 2/6...";
        // 3. test compound multiplication again
        a *= 10;
        if (a != large_number(5200))
        {
            std::cerr << "\tFailed 3/6 (" << a << "!=5200)" << std::endl;
            return false;
        }
        std::cout << "\tPassed 3/6...";
        // 4. test increment (prefix)
        ++a;
        if (a != large_number(5201))
        {
            std::cerr << "\tFailed 4/6 (" << a << "!=5201)" << std::endl;
            return false;
        }
        std::cout << "\tPassed 4/6...";
        // 5. test increment (postfix)
        a++;
        if (a != large_number(5202))
        {
            std::cerr << "\tFailed 5/6 (" << a << "!=5202)" << std::endl;
            return false;
        }
        std::cout << "\tPassed 5/6...";
        // 6. test addition with another large number
        a = a + large_number("7000000000000000000000000000000");
        if (a != large_number("7000000000000000000000000005202"))
        {
            std::cerr << "\tFailed 6/6 (" << a << "!=7000000000000000000000000005202)" << std::endl;
            return false;
        }
        std::cout << "\tPassed 6/6..." << std::endl;
        return true;
    }

    /**
     * add a digit at MSB to the large number
     **/
    void add_digit(unsigned int value)
    {
        if (value > 9)
        {
            std::cerr << "digit > 9!!\n";
            exit(EXIT_FAILURE);
        }

        _digits.push_back(value);
    }

    /**
     * Get number of digits in the number
     **/
    const size_t num_digits() const
    {
        return _digits.size();
    }

    /**
     * operator over load to access the
     * i^th digit conveniently and also
     * assign value to it
     **/
    inline unsigned char &operator[](size_t n)
    {
        return this->_digits[n];
    }

    inline const unsigned char &operator[](size_t n) const
    {
        return this->_digits[n];
    }

    /**
     * operator overload to compare two numbers
     **/
    friend std::ostream &operator<<(std::ostream &out, const large_number &a)
    {
        for (size_t i = a.num_digits(); i > 0; i--)
            out << static_cast<int>(a[i - 1]);
        return out;
    }

    /**
     * operator overload to compare two numbers
     **/
    friend bool operator==(const large_number &a, const large_number &b)
    {
        size_t N = a.num_digits();
        if (N != b.num_digits())
            return false;
        for (size_t i = 0; i < N; i++)
            if (a[i] != b[i])
                return false;
        return true;
    }

    /**
     * operator overload to compare two numbers
     **/
    friend bool operator!=(const large_number &a, const large_number &b)
    {
        return !(a == b);
    }

    /**
     * operator overload to increment (prefix)
     **/
    large_number &operator++()
    {
        (*this) += 1;
        return *this;
    }

    /**
     * operator overload to increment (postfix)
     **/
    large_number operator++(int)
    {
        large_number tmp(_digits);
        ++(*this);
        return tmp;
    }

    /**
     * operator overload to add
     **/
    template <class T>
    large_number &operator+=(T n)
    {
        if (typeid(T) == typeid(large_number)) // if adding with another large_number
        {
            large_number *b = (large_number *)&n;
            const size_t max_L = std::max(this->num_digits(), b->num_digits());
            unsigned int carry = 0;
            size_t i;
            for (i = 0; i < max_L || carry != 0; i++)
            {
                if (i < b->num_digits())
                    carry += (*b)[i];
                if (i < this->num_digits())
                    carry += (*this)[i];
                if (i < this->num_digits())
                    (*this)[i] = carry % 10;
                else
                    this->add_digit(carry % 10);
                carry /= 10;
            }
        }
        else if (std::is_integral<T>::value)
            return (*this) += large_number(n);
        else
            std::cerr << "Must be integer addition unsigned integer types." << std::endl;
        return *this;
    }

    /**
     * operator overload to perform addition
     **/
    template <class T>
    friend large_number &operator+(large_number &a, const T &b)
    {
        a += b;
        return a;
    }

    /**
     * assignment operator
     **/
    void operator=(const large_number &b)
    {
        _digits = b._digits;
    }

    /**
     * operator overload to increment
     **/
    template <class T>
    large_number &operator*=(const T n)
    {
        static_assert(std::is_integral<T>::value, "Must be integer addition unsigned integer types.");
        this->multiply(n);
        return *this;
    }

    /**
     * returns i^th digit as an ASCII character
     **/
    const char digit_char(size_t i) const
    {
        return _digits[num_digits() - i - 1] + '0';
    }

private:
    /**
     * multiply large number with another integer and
     * store the result in the same large number
     **/
    template <class T>
    void multiply(const T n)
    {
        static_assert(std::is_integral<T>::value, "Can only have integer types.");
        // assert(!(std::is_signed<T>::value)); //, "Implemented only for unsigned integer types.");

        size_t i;
        unsigned long long carry = 0, temp;
        for (i = 0; i < this->num_digits(); i++)
        {
            temp = (*this)[i] * n;
            temp += carry;
            if (temp < 10)
                carry = 0;
            else
            {
                carry = temp / 10;
                temp = temp % 10;
            }
            (*this)[i] = temp;
        }

        while (carry != 0)
        {
            this->add_digit(carry % 10);
            carry /= 10;
        }
    };

    std::vector<unsigned char> _digits; /**< where individual digits are stored */
};

#endif
