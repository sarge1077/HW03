#include <iostream>
using namespace std;

#include "HW0303.h"
#include "HW0303.cpp"

int main(){
    Dept com(10); //총 10명이 있는 학과 com
    com.read(); //총 10명의 학생들의 성적을 키보드로부터 읽어 scores 배열에 저장
    int n=countPass(com); //com 학과에 60점 이상으로 통과한 학생들의 수를 리턴
    cout<<"60점 이상은 "<<n<<"명\n";
}
