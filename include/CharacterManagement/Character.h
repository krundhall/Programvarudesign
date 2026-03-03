#pragma once
#include <string>
#include <vector>
class Character
{
private:

public:
    virtual std::string getInitialGreeting() = 0;
    std::vector<std::string> query(std::string safeQuery);
};
