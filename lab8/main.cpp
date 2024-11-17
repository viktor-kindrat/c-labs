#include <iostream>
#include <vector>
#include <string>
#include <cctype>


void replace_non_alphabetic(std::string& str, char replacement) {
  for (char& c : str) {
    if (!std::isalpha(static_cast<unsigned char>(c))) {
      c = replacement;
    }
  }
}

std::vector<int> calculate_vector_of_lengths(const std::string& input) {
  std::vector<int> lengths;

  int current_length = 0;
  char previous_char = ' ';

  for (char current_char : input) {
    if (current_char != ' ') {
      current_length++;
    } else if (current_length > 0) {
      lengths.push_back(current_length);
      current_length = 0;
    }
    previous_char = current_char;
  }

  if (current_length > 0) {
    lengths.push_back(current_length);
  }

  return lengths;
}

int calculate_count_of_words(const std::string& input) {
  if (input.empty()) {
    return 0;
  }

  int count = 0;
  char previous_char = ' ';

  for (char current_char : input) {
    if (current_char != ' ' && previous_char == ' ') {
      count++;
    }
    previous_char = current_char;
  }

  return count;
}

int main() {
  std::string input;

  std::cout << "Please enter a text: ";
  std::getline(std::cin, input);

  int count_of_words = calculate_count_of_words(input);
  replace_non_alphabetic(input, ' ');

  std::vector<int> vector_of_lengths = calculate_vector_of_lengths(input);

  std::cout << "Count of words: " << count_of_words << std::endl;
  std::cout << "Array of lengths: ";

  for (size_t i = 0; i < vector_of_lengths.size(); ++i) {
    std::cout << vector_of_lengths[i];
    if (i < vector_of_lengths.size() - 1) {
      std::cout << ", ";
    }
  }

  std::cout << std::endl;

  return 0;
}
