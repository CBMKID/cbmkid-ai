#ifndef CBMKID_AI_H
#define CBMKID_AI_H

#include <string>

class CBMKID {
public:
    CBMKID();
    std::string analyzeText(const std::string& text);

private:
    void loadModel();
};

#endif // CBMKID_AI_H
