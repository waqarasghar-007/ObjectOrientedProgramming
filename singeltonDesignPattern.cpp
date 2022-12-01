#include <iostream>
using namespace std;

class singelton
{
private:
	static singelton* instance;
	int data;
public:
	static singelton* createObject()
	{
		if (instance == NULL)
		{
			instance = new singelton();
		}
		return instance;
	}
	void setData(int data)
	{
		this->data = data;
	}
	int getData()
	{
		return data;
	}
};
singelton *singelton::instance = NULL;

int main()
{
	
	singelton* ptr = ptr->createObject();
	ptr->setData(500);
	cout << ptr->getData() << endl;

	singelton* ptr2 = ptr2->createObject();
	ptr2->setData(200);
	cout << ptr2->getData() << endl;
	cout << ptr->getData() << endl;

	system("pause");
	return 0;
}