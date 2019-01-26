  #include <iostream>
  #include <cmath>
  using namespace std;

    float go;
    float number1;
    float number2;
    float sum;
    float difference;
    float product;
    float qoutient;
    float choice;
    float powe;
    float square;
    float flp;
    float ceiling;
    
  int main()
  {

    go = 1;
  while(go == 1)
  {
    cout << "Please pick a choice" << endl;
    cout << " 1) Addition " << endl;
    cout << " 2) Subtraction " << endl;
    cout << " 3) Multiplication " << endl;
    cout << " 4) Division " << endl;
    cout << " 5) Power " << endl;
    cout << " 6) Square Root " << endl;
    cout << " 7) Floor " << endl;
    cout << " 8) Ceiling " << endl;
    cout << " 9) Exit " << endl;
    
    


    cin >> choice; 
  if (choice == 1)
  {
    cout << "You chose addition please enter 2 numbers \n";

    cin >> number1;
    cin >> number2;
    sum = number1 + number2;
    cout << "The sum of the two numbers is: "  << sum << "\n\n";
  }
  if(choice == 2)
  {
  cout <<"You chose subtraction please enter 2 numbers \n";

  cin >> number1;
  cin >> number2;
  difference = number1 - number2;
  cout << "The difference of the 2 numbers is: " << difference << "\n\n" ;
  }
  if(choice == 3)
  {
  cout <<"You chose multipliaction please enter 2 numbers \n";

  cin >> number1;
  cin >> number2;
  product = number1 * number2;
  cout << "The product of the 2 numbers is: " << product << "\n\n" ;
  }
  if(choice == 4)
  {
  cout <<"You chose division please enter 2 numbers \n";

  cin >> number1;
  cin >> number2;
  qoutient = number1 / number2;
  cout << "The qoutient of the 2 numbers is: " << qoutient << "\n\n" ;
  }
  if(choice == 5)
  {
  cout <<"You chose power, please enter 2 numbers \n";

  cin >> number1;
  cin >> number2;
  powe = pow(number1,number2);
  cout << "The power of the 2 numbers is: " << powe << "\n\n" ;
  }
 if(choice == 6)
  {
  cout <<"You chose square root, please enter a number \n";

  cin >> number1;
  
  square = sqrt(number1);
  cout << "The square root of the number is: " << square << "\n\n" ;
  }
  if(choice == 7)
  {
  cout <<"You chose Floor, please enter a number \n";

  cin >> number1;
  
  flp = floor(number1);
  cout << "The floor of the number is: " << flp << "\n\n" ;
  }
  if(choice == 8)
  {
  cout <<"You chose ceiling, please enter a number \n";

  cin >> number1;
  
  ceiling = ceil(number1);
  cout << "The ceiling of the number is: " << ceiling << "\n\n" ;
  }
  if(choice == 9){
    go++;
  }
  
  }
 }
  

    

# weifengtan
