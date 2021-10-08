#include <iostream>

#include <cstdio>

#include <Windows.h>

void initcon()
{
	AllocConsole();

	FILE* fp;
	freopen_s(&fp, "CONOUT$", "w", stdout);
}

#include <type_traits>

namespace Util
{
	template <typename T>
	struct IsCharacter : public std::disjunction
		<

		> {};
}

INT WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, LPWSTR lpCmdLine, INT nCmdShow)
{
	initcon();

	std::is_same<char, char>;

	std::cout << "hello";

	while (true);

	return 0;
}