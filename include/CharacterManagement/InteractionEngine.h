#pragma once
#include <string>
#include <vector>
class InteractionEngine
{
private:
public:
    std::string parseQuery(std::string theQuery);
    std::vector<std::string> formatResponse(std::string theQuery, std::vector<std::string> nextConversationOptions);

};
