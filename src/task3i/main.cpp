#include "task3i.h"

int main() {
  vector<string> first_question_answers{
    "Автоматизированная",
    "Операционная",
    "Интеллектуальная"
  };
  Question first_question(
      "Система программного обеспечения, что управляет работой всех структурных узлов компьютера, называется:",
      first_question_answers,
      2,
      2);
  vector<string> second_question_answers{
    "Файл",
    "Процессор",
    "Сектор"
  };
  Question second_question(
      "Совокупность данных, что размещены на диске и имеют общее имя и назначение - это:",
      second_question_answers,
      1,
      2);
  vector<string> third_question_answers{
    "Квадрат",
    "Круг",
    "Ромб"
  };
  Question third_question(
      "Для изображения на блок-схеме алгоритма условия разветвления используются графические элементы:",
      third_question_answers,
      3,
      1);
  vector<Question> questions {
    first_question,
    second_question,
    third_question
  };

  Test test(questions);
  test.RunTest();
  test.ShowResult();
  return 0;
}
