#include <iostream>
#include <vector>

// type aliases
typedef std::vector<std::pair<std::string, int>> pairlist_t1;
using pairlist_t2 = std::vector<std::pair<std::string, int>>;

int main() {
    pairlist_t1 pairlist;
    pairlist_t2 pairlist;

    int correct=8;
    int questions=10;

    double score = correct/(double) questions * 100;

    std::cout << score;

    return 0;
}