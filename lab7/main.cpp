#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cout, std::cin, std::endl, std::setw;

void init_matrix(int size, int** matrix) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      matrix[i][j] = rand() % 101;
    }
  }
}

void print_matrix(int size, int** matrix) {
  cout << "Matrix: " << endl << endl;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << setw(4) << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void free_matrix(int size, int** matrix) {
  for (int i = 0; i < size; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
}

double calculate_avarage_of_column(int column, int** matrix, int size) {
  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum += matrix[i][column];
  }

  return sum / size;
}

int find_count_of_elements_which_is_greater_than(int size, int** matrix, double number) {
  int count = 0;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (matrix[i][j] > number) {
        count++;
      }
    }
  }

  return count;
}

int main() {
  cout << "-> Enter size of matrix: ";
  int size;
  cin >> size;

  // Dynamically allocate a 2D array
  int** matrix = new int*[size];
  for (int i = 0; i < size; i++) {
    matrix[i] = new int[size];
  }

  init_matrix(size, matrix);
  print_matrix(size, matrix);

  double avarage = calculate_avarage_of_column(0, matrix, size);
  cout << "Avarage of 1 column is: " << avarage << endl;

  int count = find_count_of_elements_which_is_greater_than(size, matrix, avarage);
  cout << "Count of elements more than avarage: " << count << endl;

  free_matrix(size, matrix);

  return 0;
}
