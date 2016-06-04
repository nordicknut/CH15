#include <vector>
using namespace std;

template<typename T>
class VStack : private vector<T>
{
private:
	vector<T> v;
	int size;
public:
	VStack();
	void push(T value);
	T peek() const;
	T pop();
	bool isEmpty() const;
	int getSize() const;
};

template<typename T>
inline VStack<T>::VStack()
{
	size = 0;
}

template<typename T>
inline void VStack<T>::push(T value)
{
	v.push_back(value);
	size++;
}

template<typename T>
inline T VStack<T>::peek() const
{
	return v.at(size - 1);
}

template<typename T>
inline T VStack<T>::pop()
{
	size--;
	return v.pop_back();
}

template<typename T>
inline bool VStack<T>::isEmpty() const
{
	return size == 0;
}

template<typename T>
inline int VStack<T>::getSize() const
{
	return size;
}
