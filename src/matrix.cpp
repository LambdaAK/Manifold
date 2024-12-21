#include "Matrix.hpp"

// Constructor: Initialize with dimensions
Matrix::Matrix(size_t rows, size_t cols, double initial)
    : rows(rows), cols(cols), data(rows, std::vector<double>(cols, initial)) {}

// Constructor: Initialize from array literal
Matrix::Matrix(std::initializer_list<std::initializer_list<double>> values)
    : rows(values.size()), cols(values.begin()->size()) {
    for (const auto& row : values) {
        if (row.size() != cols) {
            throw std::invalid_argument("All rows must have the same number of columns");
        }
        data.push_back(std::vector<double>(row));
    }
}

// Overload << operator
std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (size_t i = 0; i < matrix.rows; ++i) {
        os << "| ";  // Add "|" at the beginning of the row
        for (size_t j = 0; j < matrix.cols; ++j) {
            os << matrix.data[i][j] << " ";
        }
        os << "|" << "\n";  // Add "|" at the end of the row
    }
    return os;
}
