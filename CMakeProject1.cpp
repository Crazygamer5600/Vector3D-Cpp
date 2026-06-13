// CMakeProject1.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <iomanip>
#include "vector3d.h"

using std::cin;
using std::cout;
using std::endl;

void printVector(const Vector3D& vector);

int main()
{
    Vector3D v0{};
    Vector3D v1{ 0,0,0 };
    if (v0 != v1) {
        cout << "Error both vectors should be equal!" << endl;
    }
    else if (v0 == v1) {
        cout << "v0 is equal to v1" << endl;
    }
    else {
        cout << "operator overloading problem.";
    }
    Vector3D v2{ 1,1,1 };
    Vector3D v3 = v1 + v2;
    cout << "Vector3D v3 = ";
    printVector(v3);
    cout << endl;
    Vector3D v4{ 1,7,6 };
    // test your code with the below line uncommented, if it builds, your Vector3D is incorrect
    //  v3 = v4 + v1;
    cout << "Vector3D v4 = ";
    printVector(v4);
    cout << endl;
    Vector3D v5 = v4 + v3;
    cout << "Addition of v3 and v4 is: ";
    printVector(v5);
    cout << endl;
    const Vector3D& v5ref = v5;
    cout << "The distance from v3 to v5 is: " << std::fixed << std::setprecision(2)
        << v3.distanceTo(v5ref) << endl;
    return 0;
}

void printVector(const Vector3D& vector) {
    cout << '[' << vector.x() << ',' << vector.y() << ',' << vector.z() << ']';
}
