#include <iostream>
#include <string>
struct car//car is a type of class, you cannot use car as an object.
{
    std::string manufacturer;
    int manufacturing_date;
};

int main(void)
{
    std::string a;
    int b;
    int num_of_car;
    std::cout << "How many cars do you wish to catalog?";
    std::cin >> num_of_car;
    std::cin.ignore();
    int n = num_of_car;
    int *cars = new int [n];
    car car_input[n];
    for (int i = 0; i < n; i++)
    {   
        std::cout << "Car #" << i+1 << std::endl;
        std::cout << "Please enter the make: ";
        getline(std::cin, a);
        std::cout << "Please enter the year made: ";
        std::cin >> b;
        std::cin.ignore();
        car_input[i] = {a, b};
    };
    
    std::cout << "Here is your collection:" << std::endl;
    for (int j = 0; j < n; j++)
    {
        std::cout << car_input[j].manufacturer << ' ' <<car_input[j].manufacturing_date << std::endl;
    }
    delete cars;//Intension!:if you use 'new' to open up memory, you must use delete to turn it off.
    return 0;
}