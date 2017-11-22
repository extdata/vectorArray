#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

bool change( int &, int & );
bool change( double &, double & );
void bubblesort( vector< double > & );
void fillVector( vector< double > & );
void printvector( vector< double > & );
void printarray( int [], int );


int main()
{
	srand(( int ) time( 0 ));
	int size;
	int count = 0;
	
	cout << "################################\n";
	cout << "Preencher um vetor com valores aleat" << char(162) << "rios.\n";
	cout << "O usu" << char(160) << "rio ir" << char(160) << " dizer quantos valores ser" << char(198) << "o adicionados ao vetor.\n";
	cout << "Ser" << char(198) << "o gerados valores aleat" << char(162) << "rios\n";
	cout << "Os valores ser" << char (198) << "o ordenados por bubble sort!\n";
	cout << "Depois os valores gerados ser" << char(198) << "o apagados!\n";
	
	vector< double > vetor;
	
	fillVector( vetor );
	
	printvector( vetor );
	
	bubblesort( vetor );
	
	printvector( vetor );
	
	int arrayn[vetor.size()];
	
	for (int k = 0; k < vetor.size(); k++ )
		arrayn[k] = vetor[vetor.size( ) - 1 - k];
		
	printarray( arrayn, vetor.size() );
	
	while (!vetor.empty())
  {
    vetor.pop_back();
    for ( int j = 0; j < vetor.size(); j++ )
		cout << vetor[j] << '\t';
		
	cout << '\n';
  }
}

void bubblesort( vector< double > & array )
{
	
	for ( int i = 0; i < array.size() - 1; i++ )
		for ( int j = 0; j < array.size() - 1; j++ )
			if ( change( array[j], array[j+1] ) );
	
}

void fillVector( vector< double > & arrayf )
{
	
	char answer;
	
	do
		{
			arrayf.push_back( 100.0 * ( rand() % 30 + 1 ) / 30.0 );
			cout << "\nDigite ""s"" para adicionar e ""n"" para encerrar: ";	
			cin >> answer;	
		} while ( answer == 's' );

}


void printvector( vector< double > & array )
{
	for ( int i = 0; i < array.size(); i++ )
		cout << array[i] << '\t';
		
	cout << '\n';
}

void printarray( int array[], int arraysize )
{
	for ( int i = 0; i < arraysize; i++ )
		cout << array[i] << '\t';
		
	cout << '\n';
}

bool change( int &a, int &b )
{

	int temp;
	if ( a > b )
	{
		temp = a;
		a = b;
		b = temp;
		
		return true;
	}
	else return false;
}

bool change( double &a, double &b )
{
	
	double temp;
	if ( a > b )
	{
		temp = a;
		a = b;
		b = temp;
		
		return true;
	}
	else return false;
}