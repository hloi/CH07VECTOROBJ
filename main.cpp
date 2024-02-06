#include <iostream>
#include "Review.h"
#include <vector>

using namespace std;


int main() {
    vector<Review> reviewList;
    Review currReview;
    int currRating;
    string currComment;
    unsigned int i;

    cout << "Type rating + comments. To end: -1" << endl;
    cin >> currRating;
    while (currRating >= 0) {
        getline(cin, currComment); // Gets rest of line
        currReview.SetRatingAndComment(currRating, currComment);
        reviewList.push_back(currReview);
        currReview.printInfo();
        cin >> currRating;
    }

    // Output all comments for given rating
    cout << endl << "Type rating. To end: -1" << endl;
    cin >> currRating;
    while (currRating != -1) {
        for (i = 0; i < reviewList.size(); ++i) {
            currReview = reviewList.at(i);
            currReview.printInfo();
            if (currRating == currReview.GetRating()) {
                cout << currReview.GetComment() << endl;
            }
        }
        cin >> currRating;
    }

    return 0;
}
