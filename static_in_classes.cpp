#include <iostream>

using namespace std;

class AnObject {
  public:
    static int data; //indicates a member by this name, but doesn't allocate memory.
    int nonstatic_data; //allocated each time the class is instantiated.
    AnObject(); //prototype of constructor
};

int AnObject::data = 0; //using the scope operator (::) we allocate a single int for the class.
AnObject::AnObject() {
    data++; //Increase the value of data every time AnObject is created.
}

int main() {
    AnObject a;
    AnObject b;
    AnObject c;
    cout << a.data << endl; //a.data refers to the class's integer
    return 0;
}
