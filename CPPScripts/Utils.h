#pragma once
#include <vector>
#include <string>
#include <algorithm>

namespace ZXEngine
{
	class Utils
	{
	public:
		// 字符串转换为小写
		static inline std::string StringToLower(const std::string& str);
		// 字符串转换为大写
		static inline std::string StringToUpper(const std::string& str);
		// 字符串分割
		static std::vector<std::string> StringSplit(const std::string& oriStr, char p);
		// 提取字符串中的所有单词
		static std::vector<std::string> ExtractWords(const std::string& str);
		// 是否为合法单词字符
		static bool IsValidWordChar(char c);
		// 查找字符串中是否存在某个单词，并返回起始位
		static size_t FindWord(const std::string& str, const std::string& word, size_t offset);
		// 替代字符串中的单词
		static void ReplaceAllWord(std::string& oriStr, const std::string& srcWord, const std::string& dstWord);
		// 替代字符串中的字符串
		static void ReplaceAllString(std::string& oriStr, const std::string& srcStr, const std::string& dstStr);
		// 获取由sChar和eChar括起来的一段字符串起止位置
		static void GetNextStringBlockPos(std::string& oriStr, size_t offset, char sChar, char eChar, size_t& sPos, size_t& ePos);
		// 字符串拼接
		static std::string ConcatenateStrings(const std::vector<std::string>& strings);
		// 路径转换为Windows格式
		static inline std::string ConvertPathToWindowsFormat(const std::string path);
	};

	std::string Utils::StringToLower(const std::string& str)
	{
		std::string res = str;
		std::transform(res.begin(), res.end(), res.begin(), ::tolower);
		return res;
	}

	std::string Utils::StringToUpper(const std::string& str)
	{
		std::string res = str;
		std::transform(res.begin(), res.end(), res.begin(), ::toupper);
		return res;
	}

	std::string Utils::ConvertPathToWindowsFormat(const std::string path)
	{
		std::string res = path;
		std::replace(res.begin(), res.end(), '/', '\\');
		return res;
	}
}