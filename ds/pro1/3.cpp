#include<iostream>
#include<string>
using namespace std;

int main()

{
    string str;

    cout << "Enter a string: ";

    cin >> str;

 

    for (string::const_iterator i = str.begin(), j = str.end();i > j;i++, j--)

    {

        if (*i != *j)

        {

            cout << str << " is not a palindrome!" << endl;

            return 0;

        }

    }

    cout << str << " is a palindrome!" << endl;

    return 0;

}
