#include <iostream>
using namespace std;
const int SIZE = 2;
class Matrix 
{
private:
    int mat[SIZE][SIZE];
public:
    Matrix() 
	{
        for (int i = 0; i < SIZE; ++i) 
		{
            for (int j = 0; j < SIZE; ++j) 
			{
                mat[i][j] = 0;
            }
        }
    }
    Matrix operator*(const Matrix& other) 
	{
        Matrix result;
		for (int i = 0; i < SIZE; ++i) 
		{
            for (int j = 0; j < SIZE; ++j) 
			{
                for (int k = 0; k < SIZE; ++k) 
				{
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
		return result;
    }
    void display() 
	{
        for (int i = 0; i < SIZE; ++i) 
		{
            for (int j = 0; j < SIZE; ++j) 
			{
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    void setMatrix() 
	{
        cout << "Enter " << SIZE*SIZE << " elements for the matrix:" << endl;
        for (int i = 0; i < SIZE; ++i) 
		{
            for (int j = 0; j < SIZE; ++j) 
			{
                cin >> mat[i][j];
            }
        }
    }
};
int main() {
    Matrix m1, m2, result;
    cout << "Enter elements for matrix m1:" << endl;
    m1.setMatrix();
	cout << "Enter elements for matrix m2:" << endl;
    m2.setMatrix();
    result = m1 * m2;
    cout << "Resultant Matrix:" << endl;
    result.display();
	return 0;
}
