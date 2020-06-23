#pragma once
#include "Displayable.h"

namespace cq
{

    // $brief Country is the base class representing a country, with all related information
    class Country :
        public Displayable
    {
    public:
        // $brief Constructor to create a Country
        // $param std::string capital name of the capital of the country
        Country(std::string capital)
            : _s_capital(capital)
        {}
        virtual const std::string& to_string() const
        {
            return _s_capital;
        }
    protected:
        std::string _s_capital;

    };

}
