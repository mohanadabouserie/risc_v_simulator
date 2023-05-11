#include <iostream>
using namespace std;
int strlen(char str[]) 
{
    int len = 0, i = 0;
    while(str[i] != '\0') 
    {
        i++;
        len++;
    }
    return len;
}

int main() 
{
    char str[] = "Group-number:2";
    int length = strlen(str);
    cout << "The length of the string \"" << str << "\" is " << length << std::endl;
    return 0;
}