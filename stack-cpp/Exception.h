#pragma once



class Exception {
public:
	string msg;
	Exception() {}
	Exception(string msg) {
		this->msg = "Exception:: " + msg;
	}

};

class SizeException : public Exception {
public:
	SizeException() {}
	SizeException(string msg) {
		this->msg = "SizeException:: " + msg;
	}
};


class testException : public Exception {
public:
	testException() {}
	testException(string msg) {
		this->msg = "testException:: testFailed:: " + msg;
	}
};
