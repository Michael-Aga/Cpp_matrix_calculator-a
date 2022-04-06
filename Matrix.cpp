#include "Matrix.hpp"

using namespace std;

namespace zich
{
    Matrix::Matrix(vector<double> matrix, int row, int col)
    {
        this->matrix = matrix;
        this->row = row;
        this->col = col;
    }

    Matrix::~Matrix() {}

    // Plus operators
    Matrix Matrix::operator+(const Matrix &mat) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator+=(const Matrix &mat) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator+() { return Matrix(this->matrix, this->row, this->col); }

    // Minus operators
    Matrix Matrix::operator-(const Matrix &mat) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator-=(const Matrix &mat) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator-() { return Matrix(this->matrix, this->row, this->col); }

    // Comperations operators
    bool Matrix::operator>(const Matrix &mat) const { return true; }

    bool Matrix::operator>=(const Matrix &mat) const { return true; }

    bool Matrix::operator<(const Matrix &mat) const { return true; }

    bool Matrix::operator<=(const Matrix &mat) const { return true; }

    bool Matrix::operator==(const Matrix &mat) const { return true; }

    bool Matrix::operator!=(const Matrix &mat) const { return true; }

    // Add one to every slot in the matrix
    Matrix Matrix::operator++() { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator++(int num) { return Matrix(this->matrix, this->row, this->col); }

    // Subtract one from every slot in the matrix
    Matrix Matrix::operator--() { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator--(int num) { return Matrix(this->matrix, this->row, this->col); }

    // Multiplaction operators
    Matrix Matrix::operator*(double num) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator*(const Matrix &mat) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator*(int num) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator*=(int scalar) { return Matrix(this->matrix, this->row, this->col); }

    Matrix Matrix::operator*=(double scalar) { return Matrix(this->matrix, this->row, this->col); }

    Matrix operator*(const int &num, const Matrix &matrix) { return matrix; }

    // Input and Output operators
    istream &operator>>(istream &in, const Matrix &matrix) { return in; }
    ostream &operator<<(ostream &out, const Matrix &matrix) { return out; }
}