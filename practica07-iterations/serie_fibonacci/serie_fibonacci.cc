
#include <iostream>

int main() {
    int N;

    std::cin >> N;

    int primTerm = 0;
    int segTerm = 1;

    if (N >= 1) {
        std::cout << primTerm;
    }
    if (N >= 2) {
        std::cout << ", " << segTerm;
    }

    for (int i = 3; i <= N; i++) {
        int sigTerm = primTerm + segTerm;
        std::cout << ", " << sigTerm;
        primTerm = segTerm;
        segTerm = sigTerm;
    }

    std::cout << std::endl;

    return 0;
}
