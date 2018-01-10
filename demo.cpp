#include <string>

#include <boost/regex.hpp>
#include <fmt/printf.h>

int main()
{
	std::string s = "correct@email.com";
	std::string s2 = "bademail";

	boost::regex expr("\\b[a-zA-Z0-9._%-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,4}\\b");

	fmt::print("hello, {}\n", "world!");
	fmt::print("{} is valid email: {}\n", s, boost::regex_match(s, expr));
	fmt::print("{} is valid email: {}\n", s2, boost::regex_match(s2, expr));
	return 0;
}
