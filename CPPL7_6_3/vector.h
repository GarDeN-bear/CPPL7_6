#pragma once

template<class T>
class vector {
public:
	vector() {
		v = new T(N2);
	}
	vector(int N_) {
		N2 = N_;
		v = new T(N2){ 0 };
	}
	~vector() {
		delete[] v;
		v = nullptr;
	}
	T at(int index_) {
		if (index_ < N1) {
			return v[index_];
		}
		else {
			std::cout << "Index was inputed more then vector's size!\n";
			return v[N1 - 1];
		}
	}
	void push_back(T value) {
		if (N1 < N2) {
			v[N1] = value;
			N1++;
		}
		else {
			if (N2 != 0) {
				N2 *= 2;
				T* v_temp = new T[N1]{ 0 };
				for (int i = 0; i < N1; i++) {
					v_temp[i] = v[i];
				}
				delete[] v;
				v = new T[N2]{ 0 };
				for (int i = 0; i < N1; i++) {
					v[i] = v_temp[i];
				}
				v[N1] = value;
				N1++;
				delete[] v_temp;
				v_temp = nullptr;
			}
			else {
				N2 += 1;
				delete[] v;
				v = new T[N2]{ 0 };
				v[N1] = value;
				N1++;
			}

		}
	}
	int size() {
		return N1;
	}
	int capacity() {
		return N2;
	}
private:
	int N1 = 0; // индекс на конец массива
	int N2 = 0; // размер выделенной памяти
	int* v = nullptr;
};