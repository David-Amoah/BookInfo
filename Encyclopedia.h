// Copyright 2023
// Author: David Amoah

#ifndef BOOKINFO_ENCYCLOPEDIA_H
#define BOOKINFO_ENCYCLOPEDIA_H


#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
    // TODO: Declare mutator functions -
    //       SetEdition(), SetNumPages()
public:
    void SetEdition(string newEdition);
    void SetNumPages(int pageNum);
    void SetNumVolumes(int numVol);


    // TODO: Declare accessor functions -
    //       GetEdition(), GetNumPages()
    string GetEdition();
    int GetNumPages();
    int GetNumVolumes();


    // TODO: Declare a PrintInfo() function that overrides
    //       the PrintInfo() in Book class

    void PrintInfo();


    // TODO: Declare private data members

private:
    string edition;
    int pageNum;
    int numVol;

};

#endif


#endif //BOOKINFO_ENCYCLOPEDIA_H
