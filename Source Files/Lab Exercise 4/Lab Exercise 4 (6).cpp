#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	
	cout << "Enter a string: ";
	getline(cin, str);
	
	cout << "Reverse: ";
    for (string::const_reverse_iterator p = str.rbegin(); p != str.rend(); ++p)
        cout << *p;
    cout << endl;

    system("pause>0");
    return 0;
}
