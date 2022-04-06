#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <sstream>

using namespace std;

namespace zich
{
    class Matrix
    {
    private:
        int row, col;
        vector<double> matrix;

    public:
        Matrix(vector<double> matrix, int row, int col);
        ~Matrix();

        // Plus operators
        Matrix operator+(const Matrix &mat);
        Matrix operator+=(const Matrix &mat);
        Matrix operator+();
        
        // Minus operators
        Matrix operator-(const Matrix &mat);
        Matrix operator-=(const Matrix &mat);
        Matrix operator-();

        // Comperations operators
        bool operator>(const Matrix &mat) const;
        bool operator>=(const Matrix &mat) const;
        bool operator<(const Matrix&mat) const;
        bool operator<=(const Matrix &mat) const;
        bool operator==(const Matrix &mat) const;
        bool operator!=(const Matrix &mat) const;

        // Add one to every slot in the matrix
        Matrix operator++();
        Matrix operator++(int);

        // Subtract one from every slot in the matrix
        Matrix operator--();
        Matrix operator--(int);

        // Multiplaction operators
        Matrix operator*(double num);
        Matrix operator*(const Matrix &mat);
        Matrix operator*(int num);
        Matrix operator*=(int scalar);
        Matrix operator*=(double scalar);
        friend Matrix operator*(const int &num, const Matrix &mat);

        // Input and Output operators
        friend istream &operator>>(istream &in, const Matrix &matrix);
        friend ostream &operator<<(ostream &out, const Matrix &matrix);
    };
}