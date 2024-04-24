#include "hello.h"

void Hello::say_hello()
{
    cout << "hello world!\n";
    cout << "hello world again!\n";
}

int main()
{
    Hello hello;
    hello.say_hello();
    system("PAUSE");
    return 0;
}
