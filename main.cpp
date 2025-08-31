#include <iostream>
#include <string>
#include <cctype>

using namespace std;


bool isupper (string text){
bool hasupper = false;
for(char c:text){
    if (isupper(c)){
        hasupper=true;
        break;
    }
}

return hasupper;
}
int main()
{
  
bool result = isupper("HELLO WORLD");

cout << result;

    return 0;
}
