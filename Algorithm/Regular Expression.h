#pragma once

#include <iostream>
#include <regex>
#include <string>

using namespace std;

std::string regexReplace(const std::string& input, const std::string& pattern,
	const std::string& replacement) {
	std::regex regexPattern(pattern); // 정규식 패턴을 사용해 정규식 객체 생성
	return std::regex_replace(input, regexPattern, replacement); // 정규식을 이용한 치환
}

void Express()
{
	string input = "이름2_AO";

	string pattern = R"(^(.*?)_)"; // 정규식 패턴
	string replacement = "T_$1_"; // 치환할 텍스트 (프리픽스 T를 추가)

	string result = regexReplace(input, pattern, replacement);

	cout << "변경된 파일의 이름 : " << result << endl;
}