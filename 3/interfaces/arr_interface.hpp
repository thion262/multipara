#ifndef  __ARR_INTERFACE_HPP__
#define  __ARR_INTERFACE_HPP__

#include <memory>

class ArrInterface
{
public:
	virtual void add(const ArrInterface &x) = 0;
	virtual void sub(const ArrInterface &x) = 0;
	virtual void mul(const ArrInterface &x) = 0;
	virtual void div(const ArrInterface &x) = 0;
	virtual void assign(const ArrInterface &x) = 0;

	virtual float & getElement(int idx) = 0;
	virtual const float & getElement(int idx) const = 0;
	virtual int getSize() const = 0;
	virtual void resize(int size) = 0;
	virtual std::shared_ptr<ArrInterface> clone() const = 0;
	virtual ~ArrInterface() {}
};

#endif  /*__ARR_INTERFACE_HPP__*/
