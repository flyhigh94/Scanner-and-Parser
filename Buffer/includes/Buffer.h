/*
 * Buffer.h
 *
 *  Created on: Mar 22, 2017
 *      Author: kaok1012
 */

#ifndef BUFFER_H_
#define BUFFER_H_
#include <fstream>

using namespace std;
class BufferOutOfBoundException {};
class NotAbleToOpenFileException{};

class Buffer {

private:
	//new
	const static int BUFFER_SIZE = 1024;
	char buffer1 [BUFFER_SIZE];
	char buffer2 [BUFFER_SIZE];
	int location1, location2;
	int currentBuffer, inputSize1, inputSize2;
	int diff;
	bool read;
	void fillBuffer();
	void deleteBuffer();

	fstream file;

public:
	Buffer(char* readFile);
	virtual ~Buffer();

	//new
	char getChar();
	void ungetChar();

};

#endif /* BUFFER_H_ */
