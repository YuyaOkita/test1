#include <iostream>
#include <cstdlib>
using namespace std;

const int INTARRAY_SIZE = 100;

class IntArray {
private:
	int m_array[INTARRAY_SIZE];
public:
	

	IntArray(int i);//�R���X�g���N�^
	int Get(int i);//m_array���擾���邽�߂̊֐�
	void Set(int i, int value);//m_array��ύX����֐�
	void Show(int i);
private:
	void CheckIndex(int i);
};

IntArray::IntArray(int i) {

		m_array[i] = NULL;
	
}

int IntArray::Get(int i) {
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i, int value) {
	CheckIndex(i);
	m_array[i] = value;
}

void IntArray::CheckIndex(int i) {
	if (0 <= i && i < INTARRAY_SIZE) {
		//����
	}
	else {
		cout << "�u�[" << endl;
		cout << ":" << i << endl;
		exit(EXIT_FAILURE);
	}
}

void IntArray::Show(int i) {
	cout << m_array[i] << endl;
}

int main() {

	for (int i = 0; i < INTARRAY_SIZE; i++) {

		IntArray a(i);
		
	}

	IntArray a(2);

	a.Set(1, 1);
	for (int i = 0; i < INTARRAY_SIZE; i++) {

		IntArray Get(i);
		a.Set(i,i+1);

	}
}