//
// Created by hloi on 2/6/2024.
//

#ifndef CH07VECTOROBJ_REVIEW_H
#define CH07VECTOROBJ_REVIEW_H


#include <iostream>
#include <string>



using std::string;

class Review {
public:
    Review(); // default
    Review(int rating, string comment);  // non default
    void SetRatingAndComment(int revRating, string revComment);
    int GetRating() const;
    string GetComment() const;
    void printInfo();

private:
    int rating;
    string comment;
};


#endif //CH07VECTOROBJ_REVIEW_H
