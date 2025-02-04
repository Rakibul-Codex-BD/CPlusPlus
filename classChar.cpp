#include <iostream>
using namespace std;

int main()
{

    char name[]{"Ahsan"};
    cout << name << endl;

    char company[] = "Coding Me";
    cout << company << endl;

    char intern_name[] = {'x', 'y', 'z', '\0'};
    cout << intern_name << endl;

    char greeting[100];

    // cin >> greeting;
    // cout << greeting << endl;

    cin.getline(greeting, 100);
    cout << greeting << endl;

    return 0;
}
