/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "Review.h"
#include <vector>
using std::vector;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Review r1(5, "Great place!");
        Review r2(5, "Loved the food.");
        Review r3(2, "Pretty bad service.");
        Review r4(4, "New owners are nice.");
        Review r5(2, "Yuk!!!");
        Review r6(4, "What a gem.");

        vector<Review> reviewList;
        vector<Review> testList;

        testList.push_back(r1);
        testList.push_back(r2);
        testList.push_back(r3);
        testList.push_back(r4);
        testList.push_back(r5);
        testList.push_back(r6);

        Review currRev;
        currRev.SetRatingAndComment(5, "Great place!");
        reviewList.push_back(currRev);
        currRev.SetRatingAndComment(5, "Loved the food.");
        reviewList.push_back(currRev);
        currRev.SetRatingAndComment(2, "Pretty bad service.");
        reviewList.push_back(currRev);
        currRev.SetRatingAndComment(4, "New owners are nice.");
        reviewList.push_back(currRev);
        currRev.SetRatingAndComment(2, "Yuk!!!");
        reviewList.push_back(currRev);
        currRev.SetRatingAndComment(4, "What a gem.");
        reviewList.push_back(currRev);

        TS_ASSERT(testList.size() == reviewList.size());
        for (size_t i=0; i<reviewList.size(); i++) {
            TS_ASSERT_EQUALS(reviewList.at(i).GetComment(), testList.at(i).GetComment());
            TS_ASSERT_EQUALS(reviewList.at(i).GetRating(), testList.at(i).GetRating());
        }

        testList.at(0).printInfo();


    }
};
#endif /* NEWCXXTEST_H */
