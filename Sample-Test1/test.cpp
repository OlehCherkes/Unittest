#include "pch.h"
#include <string>

extern bool fnStaticLib1();
extern bool a();


TEST(TestCaseName, TestName) {
	EXPECT_TRUE(fnStaticLib1());
}

TEST(TestCaseName, TestName1) {
	EXPECT_TRUE(a());
}

TEST(TestCaseName, TestName2) {
	EXPECT_TRUE(fnStaticLib1());
}

TEST(TestCaseName, TestName3) {
	struct A {
		A()
		{
			c++;
		}

		~A()
		{
			c--;
		}
		int a;
		int b;
		static int c;
	};

	char a[123];
	std::array<> s();
	new(a
	new(s)

}

TEST(TestCaseName, TestName3) {
	struct A {
		A()
		{
			c++;
		}

		~A()
		{
			c--;
		}
		
		operator <();
		operator <=();
		operator >();

		int a;
		int b;
		static int c;
	};

}

TEST(TestCaseName, TestName3) {
	std::string s1 = "ABRACADARA";
	std::string s2 = "ABRACADARB";
	auto s3 = s1 + "wefwef" +s2;
	if (s1 < s2)
	{

	}
	strccmp();
}

TEST(TestCaseName, TestName3) {
	std::vector<std::string> vs;
	vs.push_back( "ABRACADARA");
	vs.push_back( "ABRACADARB");
	vs.push_back( "BRACADARB");
	std::sort(vs);
	std::reverse(vs);
	std::shuffle(vs);
	std::binary_search???(vs);
	std::cout << "reg" << 1 << 1.23;
}

//
//TEST(TestCaseName, TestName3) {
//	std::filesystem::path = "c:\s\d\d";
//	path = path \ "a.exe";
//	auto s3 = s1 + "wefwef" +s2;
//}
//
