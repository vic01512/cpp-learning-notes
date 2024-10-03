#include"Person.h"
#include <deque>
#include<iostream>
#include<algorithm>
#include<vector>
#include <iomanip>
using namespace std;

void initalPerson(vector<Person>& v){
    v.emplace_back("王敏");
    v.emplace_back("杜甫");
    v.emplace_back("李白");
    v.emplace_back("王安石");
    v.emplace_back("赵匡义");
}

void PringScore(const vector<Person>& v){
    int maxNameLength = 0;
    int maxScoreLength = 0;

    // 找出最长的姓名长度和成绩的最大宽度
    for (const auto& x : v) {
        int nameLength = x.ShowName().length();
        if (nameLength > maxNameLength) {
            maxNameLength = nameLength;
        }
        int score = x.ShowScore();
        std::string scoreStr = std::to_string(score);
        int scoreLength = scoreStr.length();
        if (scoreLength > maxScoreLength) {
            maxScoreLength = scoreLength;
        }
    }

    // 输出表头
    std::cout << std::setw(maxNameLength) << std::left << "姓名" << "  ";
    std::cout << std::setw(maxScoreLength) << std::right << "成绩" << std::endl;

    // 输出分隔线
    std::cout << std::string(maxNameLength + maxScoreLength + 4, '-') << std::endl;

    // 输出数据
    for (const auto& x : v) {
        std::cout << std::setw(maxNameLength) << std::left << x.ShowName() << "  ";
        std::cout << std::setw(maxScoreLength) << std::right << x.ShowScore() << std::endl;
    }

    // 输出分隔线
    std::cout << std::string(maxNameLength + maxScoreLength + 4, '-') << std::endl;
}

void judge(vector<Person>& v){
    for(auto& x:v){
        deque<double> dq;
        for(int i=0;i<10;i++){
            double score=rand()%41+60;
            dq.push_back(score);
        }
        sort(dq.begin(),dq.end());

        dq.pop_back();
        dq.pop_front();
        double sum=0;
        for(double i:dq){
            sum+=i;
        }
        double Jieguo=sum/dq.size();
        x.SetScore(Jieguo);
    }
}

int main(){
    srand((unsigned int)time(NULL));
    system("chcp 65001");
    vector<Person> vPeron;
    initalPerson(vPeron);
    judge(vPeron);
    PringScore(vPeron);
    system("pause");
}