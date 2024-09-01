#include "cbmkid_ai.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <text>" << std::endl;
        return 1;
    }

    CBMKID model;
    std::string result = model.analyzeText(argv[1]);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
