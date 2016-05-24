#pragma once
template <class T>
class TVector
{
private:
	T *mem;
	int size;
	int first;

public:
	TVector(int size = 0, int first = 0);
	~TVector();
	TVector <T>(TVector <T> &tmp);
	TVector <T> &operator=(TVector <T>&tmp);
	T& operator [] (int index);
	TVector <T> operator+(TVector <T>&tmp);
	TVector <T> operator-( TVector <T>&tmp);
	T operator * (TVector <T>&tmp);

};


template <class T>
TVector<T>::TVector(int _size, int _first)
{

	this->size = _size;
	this->first = _first;
	mem = new T[size];
	T Nol(0);
	for (int i = 0; i<size; i++)
	{
		mem[i] = Nol;
	}

};

template <class T>
TVector<T> ::~TVector()
{
	delete[]mem;
};

template <class T>
TVector<T>::TVector( TVector<T> &tmp)
{
	size = tmp.size;
	first = tmp.first;
	mem = new T[size];
	for (int i = 0; i<size; i++)
	{
		mem[i] = tmp.mem[i];
	}
};

template <class T>
TVector<T>& TVector<T>:: operator = (TVector<T>&tmp)
{
	if ((size != tmp.size) || (first != tmp.first))
	{
		delete[] mem;
		mem = new T[tmp.size];
		size = tmp.size;
		first = tmp.first;
	}
	for (int i = 0; i<size; i++)
	{
		mem[i] = tmp.mem[i];
	}
	return *this;
};

template <class T>
T &TVector<T>::operator[] (int index)
{
	if ((index >= first) && (index<size))
	{
		return mem[index - first];
	}
	else
	{
		T Nol(0);
		return (Nol);
	}
};

template <class T>
TVector<T> TVector<T>:: operator + (TVector <T> &tmp)
{
	TVector<T> Nol(0);
	if ((size != tmp.size) || (first != tmp.first)) { return(Nol); }
	TVector<T> cur(size, first);
	for (int i = 0; i<size; i++)
	{
		cur.mem[i] = mem[i] + tmp.mem[i];
	}
	return cur;
};

template <class T>
TVector<T> TVector<T>:: operator - (TVector <T> &tmp)
{
	TVector<T> Nol(0);
	if ((size != tmp.size) || (first != tmp.first)) { return(Nol); };
	TVector<T> cur(size, first);
	for (int i = 0; i<size; i++)
	{
		cur.mem[i] = mem[i] - tmp.mem[i];
	}
	return cur;
};

template <class T>
T TVector<T>:: operator * (TVector <T> &tmp)
{
	T Nol(0);
	if ((size != tmp.size) || (first != tmp.first)) { return Nol; }
	T cur(0);
	for (int i = 0; i<size; i++)
		cur += mem[i] * tmp.mem[i];
	return cur;

};
