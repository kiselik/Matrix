#pragma once
#include "TVector.h"

template<class TM>

class TMatrix5
{
private:
	TVector<TVector<TM>> Matr;
	int Matrsize = 0;
public:
	TMatrix5(int _size = 0)
	{
		Matrsize = _size;
	Matr = TVector <TVector<TM>>(Matrsize);
	for (int i = 0; i < Matrsize; i++)
	{
		Matr[i] = TVector<TM>(Matrsize - i, i);
	}
	}

	~TMatrix5(void);

	TMatrix5(TMatrix5<TM>&tmp);
	TMatrix5<TM> & operator=(TMatrix5<TM>&tmp);
	TVector<TM> & operator[](int in);
	TMatrix5<TM>operator+(TMatrix5<TM>&tmp);
	TMatrix5<TM>operator-(TMatrix5<TM>&tmp);
	TMatrix5<TM> operator*(TMatrix5<TM>&tmp);
};

/*template <class TM>
TMatrix5<TM>::TMatrix5(int _size)
{
	Matrsize = _size;
	Matr = TVector <TVector<TM>>(Matrsize);
	for (int i = 0; i < Matrsize; i++)
	{
		Matr[i] = TVector<TM>(Matrsize - i, i);
	}
};*/

template <class TM>
TMatrix5<TM>:: ~TMatrix5(void)
{};

template <class TM>
TMatrix5<TM>::TMatrix5(TMatrix5<TM>&tmp)
{
	Matrsize = tmp.Matrsize;
	Matr = tmp.Matr;
};
template<class TM>

TVector<TM>  & TMatrix5<TM> ::  operator [](int in)
{
	return Matr[in];
};


template <class TM>
TMatrix5<TM> & TMatrix5<TM> :: operator= (TMatrix5 <TM> &tmp)
{
	Matrsize = tmp.Matrsize;
	Matr = tmp.Matr;
	return *this;
};

template <class TM>
TMatrix5<TM> TMatrix5<TM> :: operator + (TMatrix5<TM>&tmp)
{
	TMatrix5<TM>cur(0);
	cur.Matr = Matr + tmp.Matr;
	Matrsize = cur.Matrsize;
	return cur;
};

template <class TM>
TMatrix5<TM> TMatrix5<TM> :: operator-(TMatrix5<TM>&tmp)
{
	TMatrix5<TM>cur(0);
	cur.Matr = Matr - tmp.Matr;
	Matrsize = cur.Matrsize;
	return cur;
};

template <class TM>
TMatrix5<TM> TMatrix5<TM>::operator*(TMatrix5<TM>& tmp)
{
	/*TM nol(0);
	if (Matrsize != tmp.Matrsize)
	{
		return nol;
	}*/
	TMatrix5<TM> cur(Matrsize);

	for (int i = 0; i < Matrsize; i++)
	{
		for (int j = i; j < Matrsize; j++)
		{
			TM sum(0);
			for (int k = 0; k <= j; k++)
			{
				sum+= (*this)[i][k] * tmp[k][j];
				cur[i][j] = sum;
			}
		}
	}
	return cur;
};
