// Copyright 2023
// Author: David Amoah

#include "Encyclopedia.h"
#include <iostream>

void Encyclopedia::SetEdition(string newEdition) {
    this -> edition = newEdition;
}

void Encyclopedia::SetNumPages(int pageNum) {
    this -> pageNum = pageNum;
}

string Encyclopedia::GetEdition() {
    return edition;
}

int Encyclopedia::GetNumPages() {
    return pageNum;
}

void Encyclopedia::PrintInfo() {
    Book::PrintInfo();
    cout << "   Edition: " << edition << endl;
    cout << "   Number of Pages: " << pageNum << endl;
}

void Encyclopedia::SetNumVolumes(int numVol) {
    this -> numVol = numVol;
}

int Encyclopedia::GetNumVolumes() {
    return numVol;
}
