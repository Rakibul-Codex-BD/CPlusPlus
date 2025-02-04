#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[100];
    // name="Ahsan"; x

    // name[0] = 'A';
    // name[1] = 'h';
    // name[2] = '\0';

    strcpy(name, "Ahsan Shakil");

    char greet[100];
    strcpy(greet, "Hi, ");
    strcat(greet, "How are you?");

    // cout << name << endl;
    cout << greet << endl;

    return 0;
}