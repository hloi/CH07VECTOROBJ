//
// Created by hloi on 2/6/2024.
//
#include <iostream>
#include "Review.h"
using std::cout;
using std::endl;

Review::Review(int rating, string comment) {
    this->rating = rating;
    this->comment = comment;
}

Review::Review() {
    rating = 0;
    comment = "NoComment";
}

void Review::SetRatingAndComment(int revRating, string revComment) {
    this->rating = revRating;
    this->comment = revComment;
}

int Review::GetRating() const {
    return rating;
}

string Review::GetComment() const {
    return comment;
}

void Review::printInfo() {
    cout << rating << " " << comment << endl;
}
