#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <initializer_list>
#include <stdexcept>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<double>> data;
    size_t rows, cols;

public:
    // Constructor: Initialize with dimensions
    Matrix(size_t rows, size_t cols, double initial = 0.0);

    // Constructor: Initialize from array literal
    Matrix(std::initializer_list<std::initializer_list<double>> values);

    // Accessors
    size_t numRows() const { return rows; }
    size_t numCols() const { return cols; }

    // Overload << operator
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
};

#endif // MATRIX_HPP
