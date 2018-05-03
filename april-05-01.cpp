/*
Multiline comment
*/
//pre processor directice- tells compiler iostream library which contains the function cout

#include<iostream>
using namespace std;
int main()
{
    double length, width, area, perimeter;

    cout << "Program to computer and output the perimeter and area of a ractangle : " << endl;

    length = 6.0;
    width = 4.0;
    perimeter = 2 * (length * width);
    area = length * width;

    cout << "Length = "<< length << endl;
    cout << "width = " << width << endl;
    cout << "Perimeter = "<< perimeter << endl;
    cout << "Area = "<< area << endl;

    return 0;
}
