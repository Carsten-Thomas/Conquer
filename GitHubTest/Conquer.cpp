#include <iostream>
#include "Country.h"

int main()
{
    cq::Country germany("Germany");

    std::cout << germany.to_string();
}
