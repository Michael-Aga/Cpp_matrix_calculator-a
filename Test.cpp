#include "Matrix.hpp"
#include "doctest.h"

using namespace std;
using namespace zich;

TEST_CASE("Test matrices that are not the same size")
{
    vector<double> v1 = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};

    Matrix first_matrix(v1, 3, 4);
    Matrix second_matrix(v1, 4, 3);
    bool ans;

    CHECK_THROWS((first_matrix + second_matrix));
    CHECK_THROWS((first_matrix += second_matrix));
    CHECK_THROWS((first_matrix - second_matrix));
    CHECK_THROWS((first_matrix -= second_matrix));
    CHECK_THROWS((first_matrix * second_matrix));
    CHECK_THROWS((second_matrix * first_matrix));
    CHECK_THROWS(ans = (second_matrix == first_matrix));
    CHECK_THROWS(ans = (second_matrix != first_matrix));
    CHECK_THROWS(ans = (second_matrix < first_matrix));
    CHECK_THROWS(ans = (second_matrix > first_matrix));
    CHECK_THROWS(ans = (second_matrix <= first_matrix));
    CHECK_THROWS(ans = (second_matrix >= first_matrix));
}

TEST_CASE("Test math operations")
{
    vector<double> first_vector = {1, 2, 3, 4};
    vector<double> second_vector = {1, 2, 3, 4};
    vector<double> result = {2, 4, 6, 8};

    Matrix first_matrix{first_vector, 2, 2};
    Matrix second_matrix{second_vector, 2, 2};
    Matrix third_matrix{second_vector, 2, 2};
    Matrix res{result, 2, 2};

    CHECK_EQ((first_matrix + second_matrix), res);
    CHECK_FALSE((first_matrix - second_matrix) == res);
    CHECK_NE(-first_matrix, first_matrix);
    CHECK_EQ(first_matrix, second_matrix);
    CHECK_NOTHROW(second_matrix -= second_matrix);
    CHECK_NE(-first_matrix, -second_matrix);
    CHECK_NOTHROW(first_matrix++);
    CHECK_NOTHROW(second_matrix--);
    CHECK_EQ(++first_matrix, ++second_matrix);
    CHECK_EQ(--first_matrix, --second_matrix);
    CHECK_THROWS(first_matrix - third_matrix);
    CHECK_THROWS(third_matrix - second_matrix);
}