#include <iostream>

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site";
    }
    else if (age >= 0)
    {
        std::cout << "You haven't even been born yet or you are months old liar liar,";
    }
    
    else{
        std::cout << "You are not old enough to enter!";
    }

    return 0;
}