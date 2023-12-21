#include<iostream>
using namespace std;

int main(){
	char grade;
	int student = 1;
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<student<< "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			//Do something
			count[0]++;
			student++;
		}else if(grade=='B'){ // if grade is B
			//Do something
			count[1]++;
			student++;
		//and so on ... for grade = C, D, F	
		}else if(grade=='C'){ // if grade is C
			//Do something
			count[2]++;
			student++;
		}else if(grade=='D'){ // if grade is D
			//Do something
			count[3]++;
			student++;
		//and so on ... for grade = C, D, F	
		}else if(grade=='F'||grade =='f'){ // if grade is F
			//Do something
			count[4]++;
			student++;
		}else if(grade=='0'){
			break;
		}
		else{ // grade is wrong input
			//Do something
			cout << "Wrong input. Please input again.\n";
		}
	}while(true);
	
	
	cout << "In total "<<student-1<<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}

