#include <iostream>
using namespace std;


    class Parent {
    public:
        int data;

        void show_data() {
            cout << "Data: " << data << "\n";
        }
    };

    class Child : public Parent {
    public:
        string name;
    };

    class Small : public Child {
    public:
        int num;

        Small(){}

        Small(int _num, string _name, int _data) {
            num = _num;
            name = _name;
            data = _data;
        }

        void show_data() {
            cout << "Small. Data: " << data << "\n";
        }
    };

    class Bird {
    public:
        void fly() {
            cout << "AAAAAAAAAA\n";
        }
    };

    class Superman : public Small, public Bird {
    public:
        string power;
    };

    int main() {

        Child child;
        child.name = "Tom";
        child.data = 99;

        Small small_0;
        small_0.name = "Weaser";
        small_0.data = 100;
        

        Bird bird;
        Small small_1(101, "New", 200);

        bird.fly();

        Superman Flash;

        Flash.fly();
    }

