#pragma once

/*
void testPUSH() {

}

void testPOP() {

}

void testRemoveAll() {

}
*/


class testSTACK: public testException {
public:
	testSTACK();
	void starTest();
	void testPUSH();
	void testPOP();
	void testRemoveAll();
	template<typename T>
	void ERROR(string testValueName, T testValue, string expectdValueName, T expectedValue);
	
	template<typename T, typename U>
	void test(T testValue, U excpectedValue);
};



inline testSTACK::testSTACK() {}

inline void testSTACK::starTest()
{
	this->testPUSH();
	this->testPOP();
	this->testRemoveAll();
}


inline void testSTACK::testPUSH()
{
	//testing integer value--------
	int expectedValue = 1;
	STACK<int, 5> stack = expectedValue;
	int testValue = stack.getTop();

	if (testValue != expectedValue) throw testException("test failed.");

	//testing char* value--------
	int expectedValue = 1;
	STACK<int, 5> stack = expectedValue;
	int testValue = stack.getTop();

	if (testValue != expectedValue) throw testException("test failed.");
}

inline void testSTACK::testPOP()
{

}

inline void testSTACK::testRemoveAll()
{

}

template<typename T>
inline void testSTACK::ERROR(string testValueName, T testValue, string expectdValueName, T expectedValue)
{
	string msg = testValueName + testValue + expectdValueName + expectedValue;
	throw testException(msg);
}

template<typename T, typename U>
inline void testSTACK::test(T testValue, U excpectedValue)
{

}

