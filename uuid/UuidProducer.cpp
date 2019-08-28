#include "UuidProducer.h"
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <cassert>

using namespace std;

UuidProducer::UuidProducer()
{
	srand(unsigned int(time(0)));
}

UuidProducer::~UuidProducer()
{
}

std::vector<unsigned char> UuidProducer::uuid()
{
	std::vector<unsigned char> vec;
	for(size_t i = 0; i != 16; ++i)
		vec.push_back(unsigned char(rand()));
	return vec;
}

std::string format(const std::vector<unsigned char>& buffer, size_t base, size_t size)
{
	std::stringstream ss;
	for(size_t i = 0; i != size; ++i)
	{
		ss << setw(2) << setfill('0') << hex << (unsigned int)buffer[base + i];
		//cout << ss.str();
	}
	return ss.str();
}


std::string UuidProducer::format()
{
	auto vec = uuid();
	assert(vec.size() == 16);
	std::stringstream ss;
	ss << ::format(vec, 0, 4) << "-"
		<< ::format(vec, 4, 2) << "-"
		<< ::format(vec, 6, 2) << "-"
		<< ::format(vec, 8, 2) << "-"
		<< ::format(vec, 10, 6);
	return ss.str();
}
