#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double width, height, coverage, wallArea, paintNeeded, exactCans;
    int coats, cansNeeded;

    cout << "Enter wall width: ";
    cin >> width;
    cout << "Enter wall height: ";
    cin >> height;
    cout << "Enter number of coats: ";
    cin >> coats;
    cout << "Enter coverage per can: ";
    cin >> coverage;

    wallArea = width * height;
    paintNeeded = wallArea * coats;
    exactCans = paintNeeded / coverage;
    cansNeeded = (int)ceil(exactCans);

    cout << fixed << setprecision(2);
    cout << "Wall Area: " << wallArea << endl;
    cout << "Paint Needed: " << paintNeeded << endl;
    cout << "Exact Cans: " << exactCans << endl;
    cout << "Cans Needed: " << cansNeeded << endl;

    return 0;
}
