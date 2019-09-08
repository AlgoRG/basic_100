#include <iostream>
#include <string>    // strtok 함수가 선언된 헤더 파일

using namespace std;

int main()
{
    string str;
    cin>>str;
    string hour = str.substr(0, str.find(":")); // str의 처음부터 ":"가 나오기 직전까지 잘라 first에 저장
    string minute = str.substr(str.find(":") + 1); // str의 ":" 다음부터 끝까지 잘라 second에 저장
    cout<<hour<<":"<<minute;
    return 0;
}

// find (특정 문자열이 나오는 위치 인덱스 반환)

// substr(부분 문자열의 시작 인덱스, 부분 문자열의 길이);


// 부분 문자열의 길이를 입력받지 않았을 경우에는
// 부분 문자열의 시작 인덱스부터 문자열의 끝까지 리턴함


