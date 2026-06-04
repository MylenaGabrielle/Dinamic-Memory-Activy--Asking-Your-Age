#include <iostream>

using namespace std;
int main() {

    //Create my memory space
    int* age = new int;

    //program ask your age
    cout << "What is your age? ";

    //User input your age, incluid address with *
    cin >> *age;
    cout << "I am  " << *age << " years old" << endl;

    //deallocation
    delete age;
    age = nullptr;

    return 0;
}