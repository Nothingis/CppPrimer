#include <iostream>
#include <string>

int main() {
  unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
  unsigned sCnt = 0, tCnt = 0, nCnt = 0;
  char ch;

  while (std::cin >> ch) {
    switch (ch) {
      case 'a':
      case 'A':
        ++aCnt;
        break;
      case 'e':
      case 'E':
        ++eCnt;
        break;
      case 'i':
      case 'I':
        ++iCnt;
        break;
      case 'o':
      case 'O':
        ++oCnt;
        break;
      case 'u':
      case 'U':
        ++uCnt;
        break;
      case ' ':
        ++sCnt;
        break;
      case '\t':
        ++tCnt;
        break;
      case '\n':
        ++nCnt;
        break;
    }
  }
  std::cout << "aCnt = " << aCnt << std::endl << "eCnt = " << eCnt << std::endl
      << "iCnt = " << iCnt << std::endl << "oCnt = " << oCnt << std::endl
      << "uCnt = " << uCnt << std::endl << "spaceCnt = " << sCnt << std::endl
      << "tabCnt = " << tCnt << std::endl << "newlineCnt = " << nCnt
      << std::endl;
  return 0;
}
