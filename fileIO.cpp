#include <iostream>
#include <fstream>
#include <sstream>

int main(){
        std::ifstream inFile;
        std::string currentline;
        std::stringstream converter;

	std::string sNum1;
	std::string sNum2;
	std::string text;
	
	int Num1;
	int Num2;
	int sum;

        inFile.open("data.csv");
        while (getline(inFile, currentline)){
                converter.clear();
                converter.str(currentline);

                getline(converter, sNum1, ',');
                getline(converter, sNum2, ',');
                getline(converter, text);

                converter.clear();
                converter.str("");
                converter << Num1 << " " << Num2;
                converter >> Num1 >> Num2;

                int sum = Num1 + Num2;

	        for (int i = 0; i < sum; i++){
			std::cout << text << " ";
		}
		std::cout << std::ends;
        } // end while

                inFile.close();
return 0;
} // end main
