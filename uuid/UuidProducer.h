#ifndef __UUIDPRODUCER__H
#define __UUIDPRODUCER__H
#include <vector>
#include <string>

class UuidProducer
{
public:
	UuidProducer();
	~UuidProducer();
public:
	std::string format();
	std::vector<unsigned char> uuid();
};
#endif//__UUIDPRODUCER__H
