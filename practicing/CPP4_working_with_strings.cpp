#include <iostream>
using namespace std;

int main()
{
    string phrase = "University of Essex";

    cout << " I love my university \n"; // \n is like endl
    cout << " Which is " << phrase << endl;
    cout << phrase.length() << endl;
    cout << "The first chaacter of the phrase is "<< phrase[0] << endl; // Indexing starts with 0

    phrase[0] = 'Y'; // Asigning a character to a ney char
    cout << phrase << endl;

    // The index of <phrase string> at which the input string or char appears. Second parameter indicates the index of searchin start.
    cout << phrase.find("Essex", 0) << endl; 

    cout << phrase.substr(14,3) << endl; // Returns a substring of main string (strating index of main string, length of substring)







    return 0;
}