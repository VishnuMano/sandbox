#include <iostream>

class student
{
    private:
    public:
        student(int id, std::string name, int age, bool gender) {}
        void print_gender()
        {
            if (gender == 0)
            {
                std::cout = 0; 
            }
            
        }
};

int main()
{
    // Definitions
    #define print(a) std::cout << a;
    // Print
    std::cout << "hello world" << std::endl;
    // Variables
    int x = 10;
    std::cout << x << std::endl;
    std::string greeting = "Hello";

    // If Statement
    char letter = 'a';
    letter = 66;
    if (letter == 'a')
    {
        std::cout << true;
    } else {
        std::cout << letter;
    }
    std::cout << std::endl;

    // For Loop
    std::string names[4] = {"Mano", "Bindiya", "Krishna", "Vishnu"};
    // for (int i = 0; i < 4; i++)
    // {
    //     std::cout << i << ". " << names[i] << "\n";
    // }
    int counter = 0;
    for (auto name : names)
    {
        counter++;
        std::cout << counter << ". " << name << std::endl;
    }
    
    // While Loop
    int inc = 0;
    while (inc < 4)
    {
        std::cout << names[inc] << std::endl;
        inc++;
    }

    // Class -> Object
    student Krishna(001, "Krishna", 14, 1);
}