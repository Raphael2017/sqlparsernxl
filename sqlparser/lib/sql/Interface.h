#include <string>

class ISerialize
{
    virtual ~ISerialize(){}
    virtual std::string serialize() = 0;
};