#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    cin.ignore();

    char s[100];
    // cin >> s;
    // fgets(s, 100, stdin);

    cin.getline(s, 100);

    cout << x << endl << s << endl;


    /* 
    
    int x;

    string s;
    cin >> s;
    cout << s << endl;
    
     */

    return 0;
}