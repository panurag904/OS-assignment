/* Assume a kitchen has N Chef working. If each Chef can claim at most R ingredients (Each ingredient is kept in a jar), 
   then find out the total number of ingredients that are present in the kitchen thereby having deadlock free execution of work. 
   Write a code for the same. (Chef can work in any order)
*/

#include<iostream>
using namespace std;

int main() {
	int n, r, x, min_ingr;
	int *need = new int[n];
	
	cout << "Enter value of N: " << endl;
	cin >> n;
	
	cout << "Enter value of R: " << endl;
	cin >> r;
	
	while(1>0) {
		cout << "\nSelect an option: " << endl;
		cout << "1. Do not want to assign different amount of ingredient to each chef: " << endl;
		cout << "2. Assign different amount of ingredient to each chef: " << endl;
		cout << "3. Exit" << endl;
		cin >> x;
		
		switch(x) {
			case 1:
				cout << "Minimum number of ingredient that should be present in the kitchen in order";
				cout << " to have a deadlock free execution of work is ===> " <<  (n*(r-1) + 1) << endl;
				break;
				
			case 2:	
				for(int i=0; i<n; i++) {
					cout << "Enter the amount of ingredient needed by chef "  << i+1 << ": ";
					cin >> need[i];
				}
				min_ingr = 0;
				for(int i=0; i<n; i++) {
					min_ingr = min_ingr + need[i] - 1;
				}
				min_ingr++;
				cout << "Minimum number of ingredient that should be present in the kitchen in order"; 
				cout << " to have a deadlock free execution of work is ===> " << min_ingr << endl;
				break;
			
			case 3:
				exit(0);
				break;
				
			default:
				cout << "Wrong input" << endl;
		}
	}
	
	return 0;
}
