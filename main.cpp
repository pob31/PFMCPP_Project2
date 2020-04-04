#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 bool (1 bit but uses 1 byte)
 char (1 byte)
 int (2 bytes)
 unsigned int 5 (2 bytes)
 float (32bit 4 bytes)
 double (64bit float; 8 bytes or more)
  
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    float floatNumber = 3.4f;
    char charVariable{'c'};
    bool boolValue = true;
    unsigned int absoluteValue = 3;
    double bigFloat = -123456789.23456;
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(floatNumber);
    ignoreUnused(charVariable);
    ignoreUnused(boolValue);
    ignoreUnused(absoluteValue);
    ignoreUnused(bigFloat);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1) calculates distance
 */
float distance3Dsquared(float x1, float x2, float y1 = 0, float y2 = 0, float z1 = 0, float z2 =0)
{
  float distance = ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1)); // missing sqrt() function for normal distance calculation
  return distance;
}
/*

 2) calculate one of the biquad coefficients
 */
void biquadCoefA1 (float filterFreq=1000, float filterQ=0.7f, float filterGain=0.0f, int filterType=1)
{
  float A1 = 0;
  std::cout << "filter frequency: " <<filterFreq  << "Hz" << std::endl;
  std::cout << "filter Q: "         <<filterQ     << std::endl;
  std::cout << "filter gain: "      <<filterGain  << "dB" << std::endl;
  std::cout << "filter type: "      <<filterType  << std::endl;
  // calculates the A1 biquad coefficient depending on filter type and parameters
  std::cout << "A1=" << A1 << std::endl;
  return;
}
/*
 3) apply gain value
 */
float applyGain (float signal, float gainDB = 0.0f)
{
  float gain = 1; // missing exp() for proper calculation from the gain value in dB and signal in the range of [-1.,1.]
  ignoreUnused(gainDB);
  return (signal*gain);
}
/*
 4) apply colour to text
 */
void applyColour2Text (int selectedColourIndex)
{
  ignoreUnused(selectedColourIndex);
  return;
}
/*
 5) Never agrees
 */
bool neverAgree(bool Isay)
{
  return !Isay;
}
/*
 6) plays drone
 */
void playDrone(float droneFreq, float droneDuration = 1000)
{
  // play drone at 'freq' and for 'duration' in ms
  ignoreUnused(droneFreq);
  ignoreUnused(droneDuration);
  return;
}
/*
 7) type a letter
 */
void typeLetter (char typedLetter)
{
  std::cout<<typedLetter << std::endl;
  return;
}
/*
 8) high precision speed calculation
 */
double highPrecisionSpeed (double distance, double time = 1.0)
{
  return distance / time ;
}
/*
 9) comparison
 */
bool isLargerThan (int x, int y)
{
  return(x>y);
}
/*
 10) the last one
 */
int theLastOne()
{
  return 10;
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 

    std::cout << "Sorry I added a bit of code from stuff I remembered. Tried to push things a bit further than what you asked. Must have something to do with confinement boredom... :)" << std::endl;
    
    //1)
    float x_1 = 20.0f;
    float y_1 = 5.0f;
    float x_2 = 40.0f;
    float y_2 = -6.0f;
    std::cout << std::endl << "1: squared distance from (" << x_1 <<"," << y_1 <<") to (" << x_2 <<"," << y_2 <<") = ";
    std::cout << distance3Dsquared(x_1, x_2, y_1, y_2) << std::endl;
    //2)
    std::cout << std::endl << "2: " << std::endl;
    biquadCoefA1(250.0f, 2.3f, -3.3f, 3);
    //3)
    applyGain(0.23f, -4.2f);
    //4)
    applyColour2Text(4);
    //5)
    std::cout << std::endl << "5: I say true but you never agree: "<< neverAgree(true)<< std::endl;
    //6)
    playDrone(50.0f,4000.0f);
    //7)
    std::cout << std::endl << "7 : Please type a letter and press return afterwards: ";
    char pressKey;
    std::cin>>pressKey;
    typeLetter(pressKey);
    //8)
    std::cout << std::endl << "8: high precision speed calculations: " << highPrecisionSpeed (12454563241244325.72353564, 0.2345) << std::endl;
    //9)
    std::cout << std::endl << "9: is 5 larger than 8? " << isLargerThan(5,8) << std::endl;
    //10)
    std::cout << std::endl << "10: What function is this ? " << std::endl << "It's function #" << theLastOne() << std::endl ;
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl << std::endl;
    return 0;    
}
