#include <iostream>
#include <cmath>
#include <bits/stdc++.h> // this is a header file that includes every standard library
#include <cstring>
using namespace std;

int main()
{

// Declaration of variables //

string firstname[50],lastname[50]; 
string name[50],standing[50];
float studentno[50],exptotal[50],skstotal[50],mptotal[50],petotal[50],fetotal[50];
float rawexp[50],rawsks[50],rawmp[50],rawmajor[50],rawgrade[50];
float transmuted[50];
float experiment[9],skillstest[9];
float machprob[2],prelims,finals,temp;
int j;


cout<<"Enter the names of the 50 Students: "  <<endl;
//This is the main loop of Problem 1   
for ( int x = 1; x <=50; x++ ) 
	{
    	cout<<"Student " << x << endl;
    	cout <<"First name: ";
        cin >> firstname[x];
		cout <<"Last name: ";
		cin >> lastname[x];
// Storing the students name in one array //    
        name[x] = firstname[x] + " " + lastname[x];
        cout << "_________________________________________"<< endl;
        {
// The loop for Experiments
        		for(int exp = 1;exp<=9;exp++)
        	{
        		cout << "Experiment " << exp << ": ";
        		cin >> experiment[exp];
// Storing the experiments in one array
        		exptotal[x]+=experiment[exp]; 
        cout << "_________________________________________"<< endl;
        	}
// Solving for the Raw Grade of experiments that equals to 10% of their grade
				rawexp[x]=(exptotal[x] / 9) * .10;
// The loop for Skills Tests				        	
        		for(int skills = 1; skills<=9;skills++)
        	{
	       			cout << "Skills Test " << skills << ": ";
    	   			cin >> skillstest[skills];
// Storing the Skills tests in one array
				skstotal[x]+=skillstest[skills];   	
		cout << "_________________________________________"<< endl;		
			}
// Solving for the Raw Grade of the skills tests that equals to 20% of their grade
				rawsks[x]=(skstotal[x] / 9) * .20;
// The loop for Machine Problems
				for(int mp = 1;mp<=2;mp++)
        	{
        		cout << "Machine Problem " << mp << ": ";
        		cin >> machprob[mp];
// Storing the Machine Problems in one array
				mptotal[x]+=machprob[mp];
		cout << "_________________________________________"<< endl;
        	}
// Solving for the Raw Grade of Machine Problems that equals to 20% of the total grade
				rawmp[x]=(mptotal[x] / 2) * .20;  	
        	{
// The loop for Major Exams        		
        		cout << "Major Exams:"<<endl;
        		
        		cout << "\nPrelims Examination " << ": ";
        		cin >> prelims;
        		{
// Storing the Prelims in one array
        			petotal[x]+=prelims;
				}
        		cout << "Finals Examination " << ": ";
        		cin >> finals;
        		{
// Storing the Finals in one array        			
        			fetotal[x]+=finals;
				}
// Storing Prelims and Major in one array & solving for the Raw Grade that equals to 50% of the total grade
				rawmajor[x] = (petotal[x] * .20) + (fetotal[x] * .30);
				
				cout << endl << endl;
        	}
		}
// Solving for the total Raw Grade of all students
        	rawgrade[x] = rawexp[x] + rawsks[x] + rawmp[x] + rawmajor[x];
        cout << "******************************************"<< endl;

// Converting Raw Grade to Transmuted Grade

		if(rawgrade[x] < 60)
			{
	  			 transmuted[x] = 5.00;
	  		} 
		else if(rawgrade[x] >= 60 && rawgrade[x] <= 64.44)
			{
	  			transmuted[x] = 3.00;
	  		}
		else if(rawgrade[x] >= 64.45 && rawgrade[x] <= 68.89)
			{
	  			transmuted[x] = 2.75;
	  		} 
		else if(rawgrade[x] >= 68.90 && rawgrade[x] <= 73.33)
			{
	  			transmuted[x] = 2.50;
	  		}
		else if(rawgrade[x] >= 73.34 && rawgrade[x] <= 77.78)
			{
	  			transmuted[x] = 2.25;
	  		} 
		else if(rawgrade[x] >= 77.79 && rawgrade[x] <= 82.22)
			{
	  			transmuted[x] = 2.00;
	  		}
		else if(rawgrade[x] >= 82.23 && rawgrade[x] <= 86.67)
			{
	  			transmuted[x] = 1.75;
	  		}
		  else if(rawgrade[x] >= 86.68 && rawgrade[x] <= 91.11)
			{
	  			transmuted[x] = 1.50;
	  		}
		else if(rawgrade[x] >= 91.12 && rawgrade[x] <= 95.56)
			{
	  			transmuted[x] = 1.25;
	  		}
		else if(rawgrade[x] >= 95.57 && rawgrade[x] <= 100)
			{
	  			transmuted[x] = 1.00;
	  		}
	  	
// Identifying if the Student Fail or Pass
		if(rawgrade[x] >= 60)
			{
			standing[x] = "PASSED";
			}
		else if(rawgrade[x] < 60)
			{
			standing [x] = "FAILED";
			}
	}
// Makes a list of all the students with their respective grades

for(int g=1;g<=50;g++)
	{
		// Shows the Students number
		cout << endl <<"Student Number # "<< g << endl;
		// Shows the Students name
		cout << endl <<"Student Name "<< name[g] << endl;
		// Shows their Raw Grade
  		cout<<"Raw Grade: "<< rawgrade[g]<< "%" << endl;
  		// Shows theru Transmuted Grade
  		cout<<"Final Grade: "<< transmuted[g]<< endl;
  		// Shows their their standing if failed or passed
  		cout<<"Standing: " << standing[g]<< "\n\n";
 
	}
// loop for arranging the ranks of the Top 10 Students

for(int x=1;x<=10;x++)
  	{
	  	for (j=1;j<=10;j++)
		  {
		  	if (transmuted[j] > transmuted[j+1])
			{
				temp=transmuted[j];
				transmuted[j]=transmuted[j+1];
				transmuted[j+1]=temp;	
	 	}
			
		}
	}
  
	cout << "\n\nThe Top 10 Students in the rankings: " << endl;
	cout <<"Top \t\t" <<"Raw Grade\t\t"<< "Student Name" << endl;
	for (int x=1;x<=10;x++)
	{
		cout << x << "\t\t" << transmuted[x] << "\t\t" << name[x] << endl;

	}
return 0;
}
