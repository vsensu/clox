#include <iostream>
#include <string>

void run(const std::string &code)
{
    std::cout << "code: " << code << "\n";
}

void run_file(const std::string &file_path)
{
    std::cout << file_path << "\n";
}

void run_prompt()
{
    while(true)
    {
        std::cout << "> ";
        std::string line;
        std::getline(std::cin, line);
        if(line.size() == 0) break;
        run(line);
    }
}

int main(int argc, char **argv)
{
    if(argc > 2)
    {
        std::cout << "Usage: clox [script]\n";
        return 64;
    }
    else if(argc == 2)
    {
        run_file(argv[1]);
    }
    else 
    {
        run_prompt();
    }
    return 0;
}