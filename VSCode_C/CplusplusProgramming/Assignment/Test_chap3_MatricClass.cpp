// matrixMultiplication.cpp - 2���� ����� 1�������� ����, + ���� 
#include <iostream>
using namespace std;
#include <stdlib.h>
#include "time.h"
// ���� ��Ŀ� ���Ͽ�add, sub, mult, transpose �����ϴ� �ڵ�
class Matrix {
private:
	int rows, cols;
	int* Term;
public:
	Matrix(int, int); //constructor
	int GetData();
	Matrix Transpose();
	int Display();
	Matrix Add(Matrix b);
	Matrix Multiply(Matrix b);
};

Matrix::Matrix(int row, int col) { //constructor
		this->rows = row;
		this->cols = col;	
}

int Matrix::GetData() {
		this->Term = (int *)calloc(this->rows*this->cols, sizeof(int));

		for (int i=0; i<this->rows; i++) {
			for (int j=0; j<this->cols; j++) {
				*(this->Term + this->cols * i + j) = rand() % 10;
			}
		}
		return 1;
}

Matrix Matrix::Transpose() {
		Matrix result(this->cols, this->rows);
		result.Term = (int *)calloc(this->cols*this->rows, sizeof(int));

		for (int i=0; i<this->rows; i++) {
			for (int j=0; j<this->cols; j++) {
				*(result.Term + result.cols*j + i) = *(this->Term + this->cols*i + j);
			}
		}
		return result;

}

int Matrix::Display() { // ��� ���: A[rows][cols] ���
		for (int i=0; i<this->rows; i++) {
			for (int j=0; j<this->cols; j++) {
				cout << *(this->Term + this->cols * i + j) << " ";
			}
			cout << endl;
		}
		return 1;
}

Matrix Matrix::Add(Matrix b) {
	Matrix result(this->rows, this->cols);
	result.Term = (int *)calloc(this->rows*this->cols, sizeof(int));
	for (int i=0; i < this->rows; i++) {
		for (int j=0; j < this->cols; j++) {
			*(result.Term+this->cols*i+j) = *(this->Term+this->cols*i+j) + *(b.Term+this->cols*i+j);
		}
	}
	return result;
}
  
Matrix Matrix::Multiply(Matrix b) {
	Matrix result(this->rows, b.cols);
	result.Term = (int *)calloc(this->rows*result.cols, sizeof(int));
	for (int i=0; i<result.rows; i++) {
		for (int j=0; j<result.cols; j++) {
			for (int x=0; x<this->cols; x++) {
				*(result.Term + result.cols*i + j) += *(this->Term + this->cols*i + x) * *(b.Term + b.cols*x + j);
			}
		}
	}
	return result;
}

int main() {
	{
	Matrix a(2, 3); 
	Matrix a1(2, 3); 
	Matrix a2(2, 3);
	Matrix b(3, 4);
	Matrix c(2, 4);
	srand(time(NULL));
	cout << "matrix a[2][3]�� �Է�: " << endl;
	a.GetData();
	a.Display();
	
	cout << "matrix a1[2][3]�� �Է�: " << endl;
	a1.GetData();
	a1.Display();

	a2 = a.Add(a1);
	cout << "a2 = a + a1" << endl;
	a2.Display();

	cout << "matrix b[3][4]�� �Է�: " << endl;
	b.GetData();
	b.Display();
	
	Matrix d(4, 3);
	d = b.Transpose();
	cout << "Transpose() of Matrix b" << endl;
	d.Display();

	cout << "Multiply of Matrix a,b" << endl;
	c = a.Multiply(b);
	c.Display();
	}
	system("pause");
	return 0;
}

