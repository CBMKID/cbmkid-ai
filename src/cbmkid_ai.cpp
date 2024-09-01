#include "cbmkid_ai.h"
#include <iostream>
#include <algorithm>

CBMKID::CBMKID() {
    loadModel();
}

void CBMKID::loadModel() {
    // Simulate loading a model by printing a message
    std::cout << "Model loaded successfully!" << std::endl;
}

std::string CBMKID::analyzeText(const std::string& text) {
    // Placeholder logic for text analysis
    std::string lower_text = text;
    std::transform(lower_text.begin(), lower_text.end(), lower_text.begin(), ::tolower);
    
    if (lower_text.find("danger") != std::string::npos ||
        lower_text.find("harm") != std::string::npos ||
        lower_text.find("threat") != std::string::npos) {
        return "Warning: Potentially harmful content detected.";
    }
    return "Content is safe.";
}
