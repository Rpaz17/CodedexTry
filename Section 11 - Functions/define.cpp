#include <iostream>
#include <cstdlib>

using namespace std;
const double pi{3.141597};
double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cyl(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

void area_circle()
{
    double radius{};

    cout << "enter the radius of the circle: ";
    cin >> radius;
    cout << "the area of a circle with radius: " << radius << " is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};
    cout << "enter the radius of the cylinder: ";
    cin >> radius;
    cout << "enter the height of the cylinder: ";
    cin >> height;
    cout << "the volume of a cylinder with radius: " << radius << " and height: " << height << " is: " << calc_volume_cyl(radius, height) << endl;
}

int main()
{
    area_circle();
    volume_cylinder();
    return 0;
}