// Copyright 2023
// Author: David Amoah

#ifndef BOOKINFO_NEWCXXTEST_H
#define BOOKINFO_NEWCXXTEST_H




#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H



#include "Book.h"
#include "Encyclopedia.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cxxtest/TestSuite.h>

class newCxxTest : public CxxTest::TestSuite {
public:


    void testMyBookClass() {   ///test for the NameNode class
        Book book1;

        book1.SetTitle("Evolution of Man");
        book1.SetAuthor("Charles Darwin");
        book1.SetPublisher("New York Times");
        book1.SetPublicationDate("08/15/2002");

        cout << endl;

        TS_ASSERT_EQUALS(book1.GetTitle(),"Evolution of Man");
        TS_ASSERT_EQUALS(book1.GetAuthor(),"Charles Darwin");
        TS_ASSERT_EQUALS(book1.GetPublisher(),"New York Times");
        TS_ASSERT_EQUALS(book1.GetPublicationDate(),"08/15/2002");

        book1.PrintInfo();
    }

    void testMyEncyclopediaClass() {   ///test for the NameNode class
        Encyclopedia newOne;

        newOne.SetTitle("Lighthouse Encyclopedia");
        newOne.SetAuthor("Ray Jones");
        newOne.SetPublisher("Globe Pequot Press");
        newOne.SetPublicationDate("04/20/2017");
        newOne.SetEdition("Maiden Edition");
        newOne.SetNumPages(593);
        newOne.SetNumVolumes(3);

        cout << endl;

        TS_ASSERT_EQUALS(newOne.GetTitle(),"Lighthouse Encyclopedia");
        TS_ASSERT_EQUALS(newOne.GetAuthor(),"Ray Jones");
        TS_ASSERT_EQUALS(newOne.GetPublisher(),"Globe Pequot Press");
        TS_ASSERT_EQUALS(newOne.GetPublicationDate(),"04/20/2017");
        TS_ASSERT_EQUALS(newOne.GetEdition(),"Maiden Edition");
        TS_ASSERT_EQUALS(newOne.GetNumPages(),593);
        TS_ASSERT_EQUALS(newOne.GetNumVolumes(),3);

        newOne.PrintInfo();


    }


};
#endif /* NEWCXXTEST_H */


#endif //BOOKINFO_NEWCXXTEST_H

