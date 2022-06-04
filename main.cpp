#include <iostream>
#include <vector>
#include "BaseObject.h"
#include "Printable.h"
#include <algorithm>
#include <cmath>
#include "Parallelogram.h"
#include "Rectangle.h"
using namespace std;

void ADD() {
    cout << "1. Input setting to rectangle" << endl;
    cout << "2. Input setting to  paral" << endl;
    cout << "Choose: ";
}

void MAIN() {
    cout << "1. Add new objects" << endl;
    cout << "2. Print objects" << endl;
    cout << "3. Square" << endl;
    cout << "4. Perimeter" << endl;
    cout << "5. Center of mass" << endl;
    cout << "6. Memory of all objects" << endl;
    cout << "7. Sort mass of objects" << endl;
    cout << "8. Exit" << endl;
    cout << "Choose: ";
}

int main() {
    std::vector<MyFigure*> vect;
    while (true) {
        MAIN();
        int c;
        while (cin >> c) {
            if (c == 1) {
                ADD();
                cin >> c;
                if (c == 1) {
                    Rectangle* rectangle = new Rectangle;
                    rectangle->initFromDialog();
                    vect.push_back(rectangle);
                    break;
                }
                if (c == 2) {
                    Paral* rectangle = new Paral;
                    rectangle->initFromDialog();
                    vect.push_back(rectangle);
                    break;
                }
                cout << endl;
                break;
            }
            if (c == 2) {
                for (auto i = 0; i < vect.size(); i++) {
                    cout << "Element[" << i << "]: " << vect[i]->classname() << ";";
                    vect[i]->draw();
                }
                cout << endl;
                break;
            }
            if (c == 3) {
                double square = 0;
                for (auto& i : vect) {
                    if (i)
                        square += i->square();
                }
                cout << "Square: " << square << endl;
                cout << endl;
                break;
            }
            if (c == 4) {
                double perimeter = 0;
                for (auto& i : vect) {
                    if (i)
                        perimeter += i->perimeter();
                }
                cout << "Perimeter: " << perimeter << endl;
                cout << endl;
                break;
            }
            if (c == 5) {
                double x = 0;
                double y = 0;
                double ms = 0;
                for (auto& i : vect)
                {
                    x += i->position()->x * i->mass();
                    y += i->position()->y * i->mass();
                    ms += i->mass();
                }
                x /= ms;
                y /= ms;
                std::cout << "Center: x = " << x << ", y = " << y << std::endl;
                cout << endl;
                break;
            }
            if (c == 6) {
                int mem = 0;
                for (auto& i : vect) {
                    mem += i->size();
                }
                cout << "Memory amount: " << mem << endl;
                cout << endl;
                break;
            }
            if (c == 7) {
                for (int i = 0; i < vect.size(); i++) {
                    for (int j = 0; j < vect.size() - 1; j++) {
                        if (vect[j]->mass() > vect[j + 1]->mass()) {
                            swap(vect[j], vect[j + 1]);
                        }
                    }
                }
                cout << endl;
                break;
            }
            if (c == 8) {
                cout << endl;
                return 0;
            }
            else {
                cout << "Error char" << endl;
                cout << endl;
                MAIN();
            }
        }
    }
}