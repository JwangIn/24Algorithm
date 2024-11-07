#pragma once

#include <iostream>
#include <regex>
#include <string>

using namespace std;

std::string regexReplace(const std::string& input, const std::string& pattern,
	const std::string& replacement) {
	std::regex regexPattern(pattern); // ���Խ� ������ ����� ���Խ� ��ü ����
	return std::regex_replace(input, regexPattern, replacement); // ���Խ��� �̿��� ġȯ
}

void Express()
{
	string input = "�̸�2_AO";

	string pattern = R"(^(.*?)_)"; // ���Խ� ����
	string replacement = "T_$1_"; // ġȯ�� �ؽ�Ʈ (�����Ƚ� T�� �߰�)

	string result = regexReplace(input, pattern, replacement);

	cout << "����� ������ �̸� : " << result << endl;
}