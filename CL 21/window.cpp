#include "window.h"
#include <iostream>
using namespace std;

string Window::getWindowName() const {
    return windowName;
}
int Window::getTimesOpened() const {
    return timesOpened;
}
string Window::getView() const {
    return view;
}
void Window::setWindowName(const string& windowName) {
    this->windowName = windowName;
}
void Window::setTimesOpened(int timesOpened) {
    this->timesOpened = timesOpened;
    cout << "Адреса параметра timesOpened: " << &timesOpened << "\n";
    cout << "Адреса this->timesOpened: " << &this->timesOpened << "\n";
}
void Window::setView(const string& view) {
    this->view = view;
}
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