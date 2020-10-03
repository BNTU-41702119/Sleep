#include <thread>
#include <chrono>
#include <string>
#include <iostream>

using namespace std;

void sleep(int seconds)
{
    this_thread::sleep_for(chrono::seconds(seconds));
}

void sleep(string seconds)
{
    this_thread::sleep_for(chrono::seconds(stoi(seconds)));
}

int main()
{
    cout << "Hello World!\n";
    sleep(3);
    cout << "Hello World!\n";
    sleep("3");
    cout << "Hello World!\n";
}

