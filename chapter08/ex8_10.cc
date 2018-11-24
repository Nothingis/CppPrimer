#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

int main() {
  ifstream ifs("../data/book.txt");
  if (!ifs) {
    std::cerr << "Error!" << std::endl;
    return -1;
  }

  std::vector<std::string> vecLine;
  std::string line;
  while (getline(ifs, line))
    vecLine.push_back(line);

  for (auto &s : vecLine) {
    std::istringstream iss(s);
    std::string word;
    while (iss >> word)
      std::cout << word << std::endl;
  }
  return 0;
}
