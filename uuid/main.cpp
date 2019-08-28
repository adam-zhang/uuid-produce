#include <iostream>
#include "UuidProducer.h"

using namespace std;


//unsigned char getRand()
//{
//	return unsigned char(rand()); // + rand());
//}
//
//void getUUID(vector<unsigned char>& buffer)
//{
//	for(size_t i = 0; i != 16; ++i)
//	{
//		auto r = getRand();
//		buffer[i] = r;
//	}
//}
//
//string output(const vector<unsigned char>& buffer, size_t base,  int size)
//{
//	stringstream ss;
//	for(size_t i = 0; i != size; ++i)
//		ss << setw(2) << setfill('0') << hex << (unsigned int)buffer[i + base];
//	return ss.str();	
//}
//
//void format(const vector<unsigned char>& buffer)
//{
//	cout << output(buffer, 0, 4) << "-"
//	<< output(buffer, 4, 2) << "-"
//	<< output(buffer,6, 2) << "-"
//	<< output(buffer,8, 2) << "-"
//	<< output(buffer,10, 6) << endl;
//}

int main(int, char**)
{
	UuidProducer producer;
	for(size_t i = 0; i != 10; ++i)
		cout << producer.format() << endl;
	return 0;
}

