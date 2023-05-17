#include <iostream>
using namespace std;
class String
{
private:
    char *s;
public:
    String();
    String(char *);
    ~String();
    int length();
    char *strcpy(char *, const char *);
    int strlen(const char *);
    char *strcat(char *, const char *);
    String dao();
    String noi(String);
    String to_upper();
    String to_lower();
    friend istream &operator>>(istream &, String &);
    friend ostream &operator<<(ostream &, const String &);
};