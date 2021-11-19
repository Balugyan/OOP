#include "Numbers.h"

template Numbers < int >;
template Numbers < double >;

template<class T>
Numbers<T> Numbers<T>::operator/(Numbers<T> numb)
{
	Numbers<T> number;
	number.m_num = m_num / numb.m_num;
	return number;
}

template<class T>
T Numbers<T>::getNum()
{
	return m_num;	
}


