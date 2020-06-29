#include <iostream>
#include <vector>
#include <array>
using namespace std;

template<typename Matrix2D>
void print_matrix(Matrix2D const & vec)
{
    std::cout << "size of matrix is [" << vec[0].size() << " x " << vec.size() << "]\n";
    for (auto const & inner_vec : vec) {
        for (auto const & item : inner_vec) {
            std::cout << item << ", ";
        }
        std::cout << std::endl;
    }
}

template<typename OriginalMatrix2D, typename RotatedMatrix2D>
void rotate_2d_matrix_clockwise_impl(OriginalMatrix2D const & matrix,
                                     RotatedMatrix2D        & rotated_matrix,
                                     int              const M,
                                     int              const N)
{
    for (auto x = 0; x < N; ++x) {
        for (auto y = 0; y < M; ++y) {
            // Source : https://stackoverflow.com/questions/4780119/2d-euclidean-vector-rotations
            rotated_matrix[y][-x -1 +N] = matrix[x][y];
        }
    }
}

template<typename T, size_t M, size_t N>
auto rotate_2d_matrix_clockwise(array<array<T, M>, N> const & original_matrix)
    
{
    array<array<T, N>, M> rotated_matrix;
    rotate_2d_matrix_clockwise_impl(original_matrix, rotated_matrix, M, N);
    return rotated_matrix;
}

template<typename Matrix2D>
auto rotate_2d_matrix_clockwise(Matrix2D const & original_matrix)
{
    int const M = original_matrix[0].size(); //row
    int const N = original_matrix.size(); //col
    Matrix2D rotated_matrix;
    rotated_matrix.resize(M);
    for (auto x = 0; x < M; ++x) {
        rotated_matrix[x].resize(N);
    }
    rotate_2d_matrix_clockwise_impl(original_matrix, rotated_matrix, M, N);
    return rotated_matrix;
}


int main()
{
    std::array<std::array<int, 4>, 3> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    std::cout << "\nBefore Rotation :\n";
    print_matrix(data);
    std::cout << "\nAfter 2nd Clockwise Rotation :\n";
    print_matrix(rotate_2d_matrix_clockwise(rotate_2d_matrix_clockwise(data)));

    std::vector<std::vector<char>> data2 = { {'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}, {'i', 'j', 'k', 'l'}};
    std::cout << "Before Rotation :\n";
    print_matrix(data2);
    std::cout << "\nAfter Clockwise Rotation :\n";
    print_matrix(rotate_2d_matrix_clockwise(data2));

    return 0;
}