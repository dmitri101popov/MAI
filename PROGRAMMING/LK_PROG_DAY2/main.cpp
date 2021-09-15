#include <iostream>

class FooString {

   char* buf;

public:

   FooString(char* tbuf);
   ~FooString();
   void show ();
   bool compare(char* str);

};


FooString::FooString(char* tbuf){

   this -> buf = tbuf;

}

void FooString::show(){

	int i = 0;
   while(buf[i] != '\0'){

      std::cout << buf[i];
      ++i;
   }

}

bool FooString::compare(char* str){

   int i = 0;

   while(buf[i] != '\0' || str[i] != '\0'){
      
      if(buf[i] != str[i]){
         return false;
      }

      ++i;
   }
   return true;
}


void testCompare(){

   FooString aaa('aaa');

   if(aaa.compare('aaa0')) {
      std::cout << "OK";
   }
   else {
      std::cout << "TROUBLE TROUBLE"; 
   }

}


int main(){

   char test[100], test1[100];
   std::cin >> test >> test1;

   FooString fs1(test);

   std::cout << fs1.compare(test1); 

	return 0;
}