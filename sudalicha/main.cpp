#ifndef __PROGTEST__
#include <iostream>
#include <cstdlib>

#endif /* __PROGTEST__ */

#include <fstream>
#include <cstdlib>

using namespace std;

/* Vase pomocne funkce (jsou-li potreba) */
int validation(const char* srcFileName){
    ifstream myFile;
    int nacitani;
        myFile.open (srcFileName);

        while (myFile.good()){

            myFile >> nacitani;
                    if (myFile.fail() && (!myFile.eof())){
                        return(0);
                    }
                    if (!myFile.good()) break;



        }
        myFile.close();



    return (1);
}
int checkFile(const char* srcFileName, const char * dstFileName,int druhCisla){

ifstream myFile;
    int nacitani;
    int a = druhCisla;

        myFile.open (srcFileName);
        while (myFile.good()) {

           myFile >> nacitani;


               // if(myFile.good() && (!myFile.eof())){

                    if ((nacitani-a)%2 == 0) {

                        ofstream fileInto;

                            fileInto.open(dstFileName,std::ofstream::app);
                            fileInto << nacitani << endl;


                            fileInto.close();

                    }
                //}



            }
            myFile.close();


return (1);
}
int evenOdd ( const char * srcFileName, const char * dstFileName )
 {
    int checkValid = validation(srcFileName);
    if (checkValid == 0)
        return (0);

    int a = checkFile(srcFileName,dstFileName,0);
    int b = checkFile(srcFileName,dstFileName,1);

    if (a == 0 || b == 0){
        return(0);
    }
  /* ifstream myFile;

    int nacitani;

   myFile.exceptions ( ifstream::failbit | ifstream::badbit );
    try {
        myFile.open (srcFileName, std::ifstream::out | std::ifstream::app);

        while (myFile >> nacitani){


                if (nacitani%2 == 0) {

                    ofstream fileInto;
                    fileInto.exceptions ( ofstream::failbit | ofstream::badbit);
                    try {
                        fileInto.open(dstFileName, std::ofstream::out | std::ofstream::app);
                        fileInto << nacitani << endl;


                    }
                    catch (const ofstream::failure& e){

                        return (0);
                    }

                    fileInto.close();
                }
                if(myFile.eof())
                    break;

        }
    }
    catch (const ifstream::failure& e) {

        return(0);
    }

    myFile.close();


ifstream myFile2;
   myFile2.exceptions ( ifstream::failbit | ifstream::badbit );
    try {

        myFile2.open (srcFileName, std::ifstream::out | std::ifstream::app);
        while (myFile2 >> nacitani){



                if ((nacitani-1)%2 == 0) {

                    ofstream fileInto2;
                    fileInto2.exceptions ( ofstream::failbit | ofstream::badbit);
                    try {
                        fileInto2.open(dstFileName, std::ofstream::out | std::ofstream::app);
                        fileInto2 << nacitani << endl;


                    }
                    catch (const ofstream::failure& e){

                        return (0);
                    }

                    fileInto2.close();
                }
                 if(myFile2.eof())
                    break;

        }
    }
    catch (const ifstream::failure& e) {

        return(0);
    }

    myFile2.close();
*/
    return(1);
 }

#ifndef __PROGTEST__
int main ( int argc, char * argv [] )
 {

   char srcFileName[] = "in.txt";
   char dstFileName[] = "out.txt";
   cout << evenOdd(srcFileName,dstFileName);
   return 0;
 }
#endif /* __PROGTEST__ */
