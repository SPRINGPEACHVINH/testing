#include "string.h"
String::String()
{
    s = new char[1];
    s[0] = '\0';
}
String::String(char *str)
{
    s = new char[strlen(str) + 1];
    s = str;
}
String::~String()
{
    delete[] s;
}
int String::length()
{
    return strlen(s);
}
char *String::strcpy(char *dich, const char *nguon)
{
    int i = 0;
    while (nguon[i] != '\0')
        dich[i] = nguon[i++];
    dich[i] = '\0';
    return dich;
}
int String::strlen(const char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}
char *String::strcat(char *dich, const char *nguon)
{
    int i = 0, j = 0;
    while (dich[i] != '\0')
        i++;
    while (nguon[j] != '\0')
        dich[i++] = nguon[j++];
    dich[i] = '\0';
    return dich;
}
String String::dao()
{
    char *newStr = new char[length() + 1];
    for (int i = 0, j = length() - 1; i < length(); i++, j--)
    {
        newStr[i] = s[j];
    }
    newStr[length()] = '\0';
    String result = String(newStr);
    delete[] newStr;
    return result;
}
String String::to_upper()
{
    char *newStr = new char[length() + 1];
    for (int i = 0; i < length(); i++)
    {
        newStr[i] = toupper(s[i]);
    }
    newStr[length()] = '\0';
    String result = String(newStr);
    delete[] newStr;
    return result;
}
String String::to_lower()
{
    char *newStr = new char[length() + 1];
    for (int i = 0; i < length(); i++)
    {
        newStr[i] = tolower(s[i]);
    }
    newStr[length()] = '\0';
    String result = String(newStr);
    delete[] newStr;
    return result;
}
istream &operator>>(istream &is, String &str)
{
    char buffer[1000];
    is >> buffer;
    str = String(buffer);
    return is;
}
ostream &operator<<(ostream &os, const String &str)
{
    os << str.s;
    return os;
};
int main()
{
    String s;
    cout << ".";
    cin >> s;
    s = s.to_upper();
    cout << s;
}