#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string word;
    ifstream fin;
    int cnt = 0;
    fin.open("sequence.txt");
    if(fin.is_open())
    {
        while(getline(fin, word)){
            if (word[7] == '0')
                cnt++;
        }
        cout << cnt; 
        fin.close();
    }
    else
    {
        cout << "ERROR. The file cannot be opened!!!" << endl;
        cout << "Please copy the file into your project folder." << endl;
    }
    
    return 0;
}