#include "window.h"
#include <iostream>
#include <cstring>
using namespace std;

Window::Window() : Window("", 0, "", 0, 0) {}

Window::Window(const string& name, int times, const string& view, unsigned int size, int initVal)
    : windowName(name), timesOpened(times), view(view), arrSize(size) {
    if (size > 0) {
        arr = new int[size];
        for (unsigned i = 0; i < size; ++i)
            arr[i] = initVal;
    }
    else {
        arr = nullptr;
    }
}

Window::~Window() {
    delete[] arr;
}

string Window::getWindowName() const { return windowName; }
int Window::getTimesOpened() const { return timesOpened; }
string Window::getView() const { return view; }
int* Window::getArr() const { return arr; }
unsigned int Window::getArrSize() const { return arrSize; }

void Window::setWindowName(const string& name) { this->windowName = name; }
void Window::setTimesOpened(int times) { this->timesOpened = times; }
void Window::setView(const string& view) { this->view = view; }
void Window::setArr(const int* newArr, unsigned int size) {
    delete[] arr;
    arrSize = size;
    if (size > 0) {
        arr = new int[size];
        memcpy(arr, newArr, size * sizeof(int));
    }
    else {
        arr = nullptr;
    }
}

void Window::open() { cout << "Opening " << windowName << "\n"; ++timesOpened; }
void Window::close() { cout << "Closing " << windowName << "\n"; }
void Window::checkView() { cout << windowName << " shows a view of " << view << " and has been opened " << timesOpened << " times\n"; }