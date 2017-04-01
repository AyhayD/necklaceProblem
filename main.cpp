
/******************************************************************************
 
 File: Operation Assignment
 
 Description: This program... I don't know what this program does?
 
 History: Yahya Mohamed March 31th 2017
 
 Functions: neckProblem(int, int)      int        - Does the necklace problem
            cont()					           void       - Ask the user to press 'c' to Continue
 
 *******************************************************************************/
#include <iostream>

using namespace std;

//Declaration of Functions
int neckProblem(int num0, int num1);
void cont();

int main(int argc, const char * argv[])
{
    //Declaration of Variables
    int num0;
    int num1;
    int stepCounter;
	char *strnum0;
	char *strnum1;
    
    cout << "Enter first number: ";
    cin >> num0;
    
    cout << "\nEnter second number: ";
    cin >> num1;
    
    stepCounter = neckProblem(num0, num1);
    
    cout << "\n\nYour number required " << stepCounter << " steps.\n";

    cont();
    
    strnum0 = itoa(num0,strnum0,10);

	cout << strnum0 << endl;

}
int neckProblem(int num0, int num1)
{
    
    //Declaration of Variables
    int savenum0=num0;
    int savenum1=num1;
    int stepCounter=0;
    int tmp;
    
    while (true)
    {
        
        cout << num0 << endl;
        
        num0 = (num0+num1)%10;
        
        //Swap num0 and num1
        
        tmp = num0;
        num0 = num1;
        num1 = tmp;
        
        stepCounter = stepCounter + 1;
        
        
        if (savenum0==num0 && savenum1==num1)
        {
            
            break; 
        } 
    }
    
    return stepCounter;
}
void cont()
{
    
    char continuechar=NULL;
    
    while (continuechar!='c' && continuechar!='C')
    {
        
        cout << "\nPress 'C' to Continue ";
        cin >> continuechar;
    }
}











