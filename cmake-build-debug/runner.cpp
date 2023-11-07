/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/amoah/CLionProjects/BookInfo/newCxxTest.h", 24, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testMyBookClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyBookClass() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 28, "testMyBookClass" ) {}
 void runTest() { suite_newCxxTest.testMyBookClass(); }
} testDescription_suite_newCxxTest_testMyBookClass;

static class TestDescription_suite_newCxxTest_testMyEncyclopediaClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyEncyclopediaClass() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 46, "testMyEncyclopediaClass" ) {}
 void runTest() { suite_newCxxTest.testMyEncyclopediaClass(); }
} testDescription_suite_newCxxTest_testMyEncyclopediaClass;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
