#pragma once
#include<string>

class Person{
    private:
    std::string Pname_;
    double score_;
    
    public:
    Person(std::string Pname):Pname_(Pname){
        score_=0;
    }
    void SetScore(double score){
        score_=score;
    }
    double ShowScore() const{
        return score_;
    }
    std::string ShowName() const{
        return Pname_;
    }
};