#ifndef LAB2_INCLUDE_TASK3I_H
#define LAB2_INCLUDE_TASK3I_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Question {
  public:
    Question(const string & question_message, const vector<string> & variants,
             const int & correct_answer_number,
             const int & correct_answer_points):
              question_message_(question_message),
              variants_(variants),
              correct_answer_number_(correct_answer_number),
              correct_answer_points_(correct_answer_points) {}

    void ShowQuestionMessage();
    void ShowVariants();
    int GetPoints(const int &);

  private:
    string question_message_;
    vector<string> variants_;
    int correct_answer_number_;
    int correct_answer_points_;

};

class Test {
  public:
    Test(const vector<Question> & questions): questions_(questions), points_(0) {}
    void RunTest();
    void ShowResult();

  private:
    vector<Question> questions_;
    int points_;
};

#endif
