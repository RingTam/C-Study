#include<string>

using namespace std;

struct Person {
    string name;
    int age;
    double englishScore;
    float historyScore;
};

int main(int argc, char *argv[]) {
    Person *p = new Person;
    p->age = 1;
    p->name = "monster";
    p->englishScore = 1.2;
    p->historyScore = 4.4;
    printf("%.1lf %.1f %s %d", p->englishScore, p->historyScore, p->name.c_str(), p->age);
    return 0;
}