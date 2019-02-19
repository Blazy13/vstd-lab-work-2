#include "task3i.h"

int Question::GetPoints(const int & answer_number) {
  int result = 0;
  if (answer_number == correct_answer_number_) result = correct_answer_points_;
  return result;
}

void Question::ShowQuestionMessage() {
  cout << question_message_ << endl;
}

void Question::ShowVariants() {
  for (size_t i = 0; i < variants_.size(); i++) {
    cout << i+1 << ". " << variants_[i] << endl;
  }
}

void Test::RunTest() {
  for (size_t i = 0; i < questions_.size(); i++) {
    Question current_question = questions_[i];
    current_question.ShowQuestionMessage();
    current_question.ShowVariants();
    int answer_number = 0;
    cout << "\tВведите вариант ответа:" << endl;
    cin >> answer_number;
    points_ += current_question.GetPoints(answer_number);
  }
}

void Test::ShowResult() {
  cout << "Ваш результат: " << points_ << " баллов" << endl;
}
