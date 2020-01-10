#include <iostream>
#include <string>
using namespace std;

string compress(string text) {
    string sum = "";
    int i = 1;
    
    while (i <= text.size()) {
        sum += text[i - 1];
        i += 3;
    }
    
    return sum;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    string j = compress("CPECMU");
    string k = compress("X");
    
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";
    cout << j<< "\n" << k << "\n";
}