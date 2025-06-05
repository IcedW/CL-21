#include "Window.h"
#include <iostream>
using namespace std;

void Window::open() {
    cout << "Opening " << windowName << "\n";
    timesOpened++;
}
void Window::close() {
    cout << "Closing " << windowName << "\n";
}
void Window::checkView() {
    cout << windowName << " shows a view of " << view
        << " and has been opened " << timesOpened << " times\n";
}