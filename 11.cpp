#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    std::string word;
    std::ifstream fin;
    int count = 0;
    fin.open("rime.txt");
    if(fin.is_open())
    {
        while(fin >> word) 
            std::cout << "The number of word in \"rime.txt\" is: " << word << std::endl;
        fin.close();
    }
    else
    {
        std::cout << "ERROR. The file cannot be opened!!!" << std::endl;
        std::cout << "Please copy the file into your project folder." << std::endl;
    }
    
    return 0;
}