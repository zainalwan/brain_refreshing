#include <iostream>

void say_hello();
void print_argument_information(int &arguments_count, const char* const
    arguments_value[]);

int main(int arguments_count, const char* const arguments_value[])
{
    say_hello();
    print_argument_information(arguments_count, arguments_value);

    return 0;
}

void say_hello()
{
    std::cout << "Hello, World" << '\n';
}

void print_argument_information(int &arguments_count, const char* const
    arguments_value[])
{
    std::cout << "The total passed arguments: " << arguments_count << '\n';
    std::cout << "Arguments list:" << '\n';
    for(short i = 0; i < arguments_count; i++)
    {
        std::cout << "    - " << arguments_value[i] << '\n';
    }
}
