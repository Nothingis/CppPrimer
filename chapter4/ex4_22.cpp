#include <iostream>

using namespace std;

int main()
{
		for (unsigned score; std::cin >> score;)
		{
				//조건 연산자
				auto grade = score > 90 ? "고득점 합격" :
						score > 75 ? "합격" : score >= 60 ? "저득점 합격" : "실패";

				std::cout << grade << std::endl;

				//if문
				if ( score > 90 )
						std::cout << "고득점 합격";
				else if ( score > 75 )
						std::cout << "합격";
				else if ( score >= 60 )
						std::cout << "저득점 합격";
				else
						std::cout << "실패";

				std::cout << std::endl;

		}

		return 0;
}
