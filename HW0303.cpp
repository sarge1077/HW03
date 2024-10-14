#include <iostream>
using namespace std;

#include "HW0303.h"

int countPass(Dept &dept){ //dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
    int count=0;
    for(int i=0;i<dept.getSize();i++){
        if(dept.isOver60(i)) count++;
    }
    return count;
}

Dept::Dept(int size){
    this->size=size;
    scores=new int[size];
}

Dept::~Dept(){
    delete[] scores;
}

int Dept::getSize(){
    return size;
}

void Dept::read(){
    cout<<"10개 점수 입력>>";
    for(int i=0;i<size;i++){
        cin>>scores[i];
    }
}

bool Dept::isOver60(int index){
    if(scores[index]>60) return true;
    else return false;
}