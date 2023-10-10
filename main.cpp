#include <iostream>


int main()
{
    float kg;
    bool delivery;
    bool location;
    float price = 0;
    float kgDifference;
    bool answer = true;

    while (answer != 0)
    {
        std::cout << "Enter the weight of the package: ";
        std::cin >> kg;

       std:: cout << "Is the delivery standart or express? (1 - standart, 0 - express): ";
        std::cin >> delivery;

        std::cout << "Is the location to an office or an address? (1 - office, 0 - address): ";
        std::cin >> location;

        if (kg <= 5)
        {
            price += 3;
        }
        else if (kg > 5) {
            kgDifference = kg - 5;
            price = price + 3 + kgDifference;
        }

        if (delivery == 0)
        {
            price += 5;
        }

        if (location == 0)
        {
            price += 3;
        }

        std::cout << "The price of the delivery is: " << price << std::endl;

       std::cout << "Would you want a new calculation? (1 - yes, 0 - no): ";
        std::cin >> answer;

        if (answer == 1)
        {
            price = 0;
        }
    }
}