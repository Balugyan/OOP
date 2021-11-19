#include "Array.h"

template Arr <int>;
template Arr <double>;

template<class T>
Arr<T>::Arr()
{
	m_size = 100;
	m_arr = new T[m_size];
	m_index = 0;
	m_sum = 0;
	m_average = 0.0;
}

template<class T>
void Arr<T>::setIndex(int index)
{
	m_index = index;
}

template<class T>
void Arr<T>::initArr(int ind) {
	cout << "Enter a number: ";
	cin >> m_arr[ind];
}

template<class T>
void Arr<T>::print(int ind) {
	for (int i = 0; i < ind; i++) {
		cout << m_arr[i] << " ";
	}
	cout << "\n";
}

template<class T>
void Arr<T>::findAverage(int ind) {
	m_average = static_cast<double>(m_sum) / ind;
}

template<class T>
double Arr<T>::getAverage() {
	return m_average;
}

template<class T>
T Arr<T>::getSum() {
	return m_sum;
}

template<class T>
void Arr<T>::findSum(int ind) {
	for (int i = 0; i < ind; i++) {
		m_sum += m_arr[i];
	}
}

template<class T>
T& Arr<T>::operator[](int ind) {
	T max = m_arr[0];
	for (int i = 0; i <= ind - 1; i++) {
		if (m_arr[i] > max) {
			max = m_arr[i];
		}
	}
	return max;
}

template<class T>
void Arr<T>::findMax(int ind) {
	cout << "Max: " << operator[](ind)<<endl;
}

void menu()
{
	cout << "Enter a number:\n";
	cout << "1. To fill array\n";
	cout << "2. Summ of array\n";
	cout << "3. To find average\n";
	cout << "4. Print\n";
	cout << "5. To find max element\n";

}
