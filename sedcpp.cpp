#include <string>
#include <cctype>
#include <iostream>
using namespace std;


int main()
{
    cout << "Enter your keyword : ";
    string input;
    //cin >> input;
    char transform;
    char operate;
    while(cin >> input)
    {
    for(int i = 0; i != input.length(); i++)
    {
        transform = input[i];
        operate = toupper(transform);
        cout << "[" << transform << operate << "]";
    }
    cout << "\n\n";
    cout << "Enter another keyword or ctrl+Z to exit\n";
    }
    cout << endl;



return 0;
}
