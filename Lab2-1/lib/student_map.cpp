#include <iostream>
#include <map>
#include <string>

using namespace std;

// 학생 정보를 저장하는 구조체
struct Student {
    string name;     // 학생 이름
    int midterm;     // 중간 점수
    int final;       // 기말 점수

    // 생성자
    Student(string n, int m, int f) : name(n), midterm(m), final(f) {}
};

// 메인 함수
int main() {
    int student_count;

    // 학생 수 입력
    cout << "학생 수를 입력하세요: ";
    cin >> student_count;

    // 학생 정보를 저장할 map 선언 (이름을 키로 사용)
    map<string, Student> students;

    // 학생 정보 입력
    for (int i = 0; i < student_count; i++) {
        string name;
        int midterm, final;

        cout << "학생 " << (i + 1) << " 이름: ";
        cin >> name;
        cout << "중간 점수: ";
        cin >> midterm;
        cout << "기말 점수: ";
        cin >> final;

        // map에 학생 정보 추가
        students[name] = Student(name, midterm, final);
    }

    // 학생 정보 출력 (이름 순서)
    cout << "\n학생 정보 (이름 순서):\n";
    for (const auto& pair : students) {
        cout << "이름: " << pair.second.name 
             << ", 중간: " << pair.second.midterm 
             << ", 기말: " << pair.second.final << endl;
    }

    return 0;
}