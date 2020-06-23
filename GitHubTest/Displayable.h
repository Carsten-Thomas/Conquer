#pragma once
#include <string>

namespace cq
{

    class Displayable
    {
    public:
        virtual const std::string& to_string() const = 0;
    };

}
