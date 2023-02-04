#include <iostream>

using namespace std;

int main()
{
    string character_name = "Mehrdad";

    // Another waty of defining a variable:
    int character_age ; 
    character_age = 32;


/*
    cout << "There once was a man named John ";
    cout << "He was 35 years old." << endl;
    cout << "He liked the name John." << endl;
    cout << "But he didn't like being 35" << endl;
*/
    cout << "There once was a man named " << character_name << endl;
    cout << "He was " << character_age <<" years old." << endl;

    character_name = " Amin"; // After define a variable, we can modify it where ever we want
    
    cout << "He liked the name " << character_name << endl;
    cout << "But he didn't like being " << character_age << endl;
    
    return 0;

}
