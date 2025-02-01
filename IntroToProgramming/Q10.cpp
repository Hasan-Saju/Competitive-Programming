#include <bits/stdc++.h>
using namespace std;

int main() {

    double width, length, height;
    int num_doors, num_windows;
    double door_width, door_height, window_width, window_height;

    // Input house dimensions
    cout << "Enter the width of the house: ";
    cin >> width;
    cout << "Enter the length of the house: ";
    cin >> length;
    cout << "Enter the height of the house: ";
    cin >> height;

    // Input door details
    cout << "Enter the number of doors: ";
    cin >> num_doors;
    cout << "Enter the width of a door: ";
    cin >> door_width;
    cout << "Enter the height of a door: ";
    cin >> door_height;

    // Input window details
    cout << "Enter the number of windows: ";
    cin >> num_windows;
    cout << "Enter the width of a window: ";
    cin >> window_width;
    cout << "Enter the height of a window: ";
    cin >> window_height;

    // Calculate wall area
    double wall_area = (2 * height * length) + (2 * height * width);

    // Calculate door area
    double door_area = num_doors * door_height * door_width;

    // Calculate window area
    double window_area = num_windows * window_height * window_width;

    // Calculate total paintable area
    double total_area = wall_area - door_area - window_area;

    // Output the result
    cout << "The total paintable surface area is: " << total_area << " square units." << endl;

    return 0;
}

