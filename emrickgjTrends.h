#include "Trends.h"

class emrickgjTrends : public Trends{
public:

struct Data{
		int key;
		std::string data;
		int nextPopularKey;
		int lastPopularKey;
		int nextCollisionKey;
		int lastCollisionKey;
		int frequency;

};

	virtual int generateHash(std::string string);

	virtual Data* find(int key);


    emrickgjTrends();

	virtual ~emrickgjTrends();

	virtual void increaseCount(std::string, int amount);

	virtual int getCount(std::string);

	virtual std::string getNthPopular(int n);

	virtual int numEntries();

private:

	//My Variables go here
	Data* mainTable;
	Data* collisionTable;

	int numOfEntries;
	int mainTableSize;
	int numCollisions;
	int collisionTableSize;

	Data* dummyNode;
	
};