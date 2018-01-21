#include <vector>
#include <iostream>

int main()
{
    std::vector<unsigned> scores(11, 0);
    for (unsigned grade; cin >> grade;/* */)
        if (grade <= 100)
            ++*(scores.begin() + grade / 10);

    for (auto s : scores) 
        std::cout << s << " ";
    std::cout << std::endl;

    return 0;
}
