#include<iostream>
#include<time.h>
using namespace std;
class Quiz{
      protected:
      int random_number;
      char choice,ch;
      void DataInput(){
        char regNo;
        string name;
        // cout<<"Enter Your Registration Number: ";
        // cin>>regNo;
        cout<<"Enter Your Name: ";
        cin>>name;
      }
 void Result(int marks,int questionCount){
   cout<<"RESULT: "<<marks<<"/"<<questionCount<<endl;
  }

};
class ComputerScience: public Quiz{

    
public:
  void Questions(){
   do{
    cout<<"********** Computer Science **********"<<endl<<endl;
    DataInput();
     int marks_count = 0, questionCount=0;
    int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1,count8=1,count9=1,count10=1;
    for(int i = 0; i<=20; i++){
      srand(time(0));
     random_number = rand()%10; 


       switch (random_number)
       {
       case 1:
       {
       if(count1 == 2){
        continue;
       }
       else {
          questionCount = questionCount+1;
         cout<<questionCount<<": What is the purpose of an operating system?"<<endl;
         cout<<"A) Run applications"<<endl;
         cout<<"B) Manage hardware resources"<<endl;
         cout<<"C) Both A and B"<<endl;
         cout<<"D) None of the above"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count1++;
       }
        break;
       }
       


case 2:{
       if(count2 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": In object-oriented programming, what is encapsulation?"<<endl;
         cout<<"A) Hiding implementation details"<<endl;
         cout<<"B) Inheriting from multiple classes"<<endl;
         cout<<"C) Dynamic method dispatch"<<endl;
         cout<<"D) All of the above"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count2++;
       }
        break;
}


case 3:{
       if(count3 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What does HTML stand for?"<<endl;
         cout<<"A) HyperText Markup Language"<<endl;
         cout<<"B) High-Level Text Manipulation Language"<<endl;
         cout<<"C) Hyper Transfer Markup Language"<<endl;
         cout<<"D) Hyperlink and Text Markup Language"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count3++;
       }
        break;
}


case 4:{
       if(count4 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the role of a compiler in programming?"<<endl;
         cout<<"A) Converts source code to machine code"<<endl;
         cout<<"B) Executes the program"<<endl;
         cout<<"C) Manages memory during runtime"<<endl;
         cout<<"D) None of the above"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count4++;
       }
        break;
}


case 5:{
       if(count5 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which data structure follows the Last In First Out (LIFO) principle?"<<endl;
         cout<<"A) Queue"<<endl;
         cout<<"B) Stack"<<endl;
         cout<<"C) Linked List"<<endl;
         cout<<"D) Tree"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count5++;
       }
        break;
}



case 6:{
       if(count6 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the purpose of the SQL SELECT statement?"<<endl;
         cout<<"A) Update records in a database"<<endl;
         cout<<"B) Retrieve data from a database"<<endl;
         cout<<"C) Delete records from a database"<<endl;
         cout<<"D) Insert new records into a database"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count6++;
       }
        break;
}


case 7:{
       if(count7 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What does the acronym TCP/IP stand for?"<<endl;
         cout<<"A) Transmission Control Protocol/Internet Protocol"<<endl;
         cout<<"B) Time Configuration Protocol/Internet Port"<<endl;
         cout<<"C) Technical Control Protocol/Information Port"<<endl;
         cout<<"D) Terminal Connection Protocol/Interchange Port"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count7++;
       }
        break;
}


case 8:{
       if(count8 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which sorting algorithm has an average time complexity of O(n log n)?"<<endl;
         cout<<"A) Bubble Sort"<<endl;
         cout<<"B) Quick Sort"<<endl;
         cout<<"C) Insertion Sort"<<endl;
         cout<<"D) Selection Sort"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count8++;
       }
        break;
}



case 9:{
   questionCount = questionCount+1;
       if(count9 == 2){
        continue;
       }
       else {
         cout<<questionCount<<": What is the purpose of a VPN (Virtual Private Network)?"<<endl;
         cout<<"A) Securely connect to a private network over the Internet"<<endl;
         cout<<"B) Speed up internet connection"<<endl;
         cout<<"C) Create virtual machines"<<endl;
         cout<<"D) Block unwanted websites"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count9++;
       }
        break;
}



       default:{
 if(count10 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the primary function of a router in a computer network?"<<endl;
         cout<<"A) Connect devices within the same network"<<endl;
         cout<<"B) Filter and forward data between different networks"<<endl;
         cout<<"C) Store and manage network data"<<endl;
         cout<<"D) Provide electrical power to network devices"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count10++;
       }


        break;
       }
       }
    }
    Result(marks_count,questionCount);
    cout<<"Try again? Press 'y' or 'n' ";
    cin>>ch;
    }while(ch == 'y');
  }
 
//


};
class Medicine: public Quiz{
public:
  void Questions(){
   do{
    cout<<"********** Medicine **********"<<endl<<endl;
    DataInput();
      int marks_count = 0, questionCount=0;
      int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1,count8=1,count9=1,count10=1;
    for(int i = 0; i<=20; i++){
      srand(time(0));
     random_number = rand()%10; 


       switch (random_number)
       {
       case 1:
       {
       if(count1 == 2){
        continue;
       }
       else {
          questionCount = questionCount+1;
         cout<<questionCount<<": What is the primary function of the respiratory system?"<<endl;
         cout<<"A) Pump blood throughout the body"<<endl;
         cout<<"B)  Filter toxins from the blood"<<endl;
         cout<<"C)  Exchange gases (oxygen and carbon dioxide) in the lungs"<<endl;
         cout<<"D)  Regulate body temperature"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count1++;
       }
        break;
       }
       


case 2:{
       if(count2 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which organ produces insulin in the human body?"<<endl;
         cout<<"A) Liver"<<endl;
         cout<<"B) Pancreas"<<endl;
         cout<<"C) Kidneys"<<endl;
         cout<<"D) Stomach"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count2++;
       }
        break;
}


case 3:{
       if(count3 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the normal resting heart rate for adults?"<<endl;
         cout<<"A) 60-100 beats per minute"<<endl;
         cout<<"B) 120-150 beats per minute"<<endl;
         cout<<"C) 30-50 beats per minute"<<endl;
         cout<<"D) 180-220 beats per minute"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count3++;
       }
        break;
}


case 4:{
       if(count4 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which vitamin is essential for the clotting of blood?"<<endl;
         cout<<"A) Vitamin A"<<endl;
         cout<<"B) Vitamin C"<<endl;
         cout<<"C) Vitamin D"<<endl;
         cout<<"D) Vitamin k"<<endl;
         cin>>choice;
         if(choice == 'd'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count4++;
       }
        break;
}


case 5:{
       if(count5 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the function of the kidneys in the human body?"<<endl;
         cout<<"A) Regulation of blood pressure"<<endl;
         cout<<"B) Filtration of blood and production of urine"<<endl;
         cout<<"C) Digestion of food"<<endl;
         cout<<"D) Production of red blood cells"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count5++;
       }
        break;
}



case 6:{
       if(count6 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which part of the human brain is responsible for coordination and balance?"<<endl;
         cout<<"A) Cerebrum"<<endl;
         cout<<"B) Cerebellum"<<endl;
         cout<<"C) Medulla oblongata"<<endl;
         cout<<"D) Thalamus"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count6++;
       }
        break;
}


case 7:{
       if(count7 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the main function of the immune system?"<<endl;
         cout<<"A) Pump blood throughout the body"<<endl;
         cout<<"B) Produce insulin"<<endl;
         cout<<"C) Protect the body against infections and diseases"<<endl;
         cout<<"D) Regulate body temperature"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count7++;
       }
        break;
}


case 8:{
       if(count8 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which of the following is a viral infection?"<<endl;
         cout<<"A) Tuberculosis"<<endl;
         cout<<"B) Influenza"<<endl;
         cout<<"C) Staphylococcus infection"<<endl;
         cout<<"D) Lyme disease"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count8++;
       }
        break;
}



case 9:{
   questionCount = questionCount+1;
       if(count9 == 2){
        continue;
       }
       else {
         cout<<questionCount<<": What is the function of the digestive enzyme amylase?"<<endl;
         cout<<"A) Break down proteins"<<endl;
         cout<<"B) Break down fats"<<endl;
         cout<<"C) Break down carbohydrates"<<endl;
         cout<<"D) Assist in blood clotting"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count9++;
       }
        break;
}



       default:{
 if(count10 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which of the following is a characteristic symptom of diabetes?"<<endl;
         cout<<"A) Hypertension"<<endl;
         cout<<"B) Persistent cough"<<endl;
         cout<<"C) Elevated blood sugar levels"<<endl;
         cout<<"D) Osteoporosis"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count10++;
       }


        break;
       }
       }
    }
    Result(marks_count,questionCount);
    cout<<"Try Again? Press 'y' or 'n' ";
    cin>>ch;
      }while(ch == 'y');
  }

};
class Commerce: public Quiz{
public:
  void Questions(){
   do{
    cout<<"********** Commerce **********"<<endl<<endl;
    DataInput();
      int marks_count = 0, questionCount=0;
  int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1,count8=1,count9=1,count10=1;
    for(int i = 0; i<=20; i++){
      srand(time(0));
     random_number = rand()%10; 


       switch (random_number)
       {
       case 1:
       {
       if(count1 == 2){
        continue;
       }
       else {
          questionCount = questionCount+1;
         cout<<questionCount<<": What is the primary purpose of a balance sheet in accounting?"<<endl;
         cout<<"A) Record daily transactions"<<endl;
         cout<<"B) Determine profitability"<<endl;
         cout<<"C) Present financial position at a specific point in time"<<endl;
         cout<<"D) Calculate tax liabilities"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count1++;
       }
        break;
       }
       


case 2:{
       if(count2 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the basic economic concept that describes the total value of goods and services produced by a country in a specific time period?"<<endl;
         cout<<"A) GDP (Gross Domestic Product)"<<endl;
         cout<<"B) CPI (Consumer Price Index)"<<endl;
         cout<<"C) ROI (Return on Investment)"<<endl;
         cout<<"D) P/E Ratio (Price/Earnings Ratio)"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count2++;
       }
        break;
}


case 3:{
       if(count3 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What does the term 'LIFO' stand for in inventory accounting?"<<endl;
         cout<<"A) Last In, First Out"<<endl;
         cout<<"B) First In, First Out"<<endl;
         cout<<"C) Last In, Last Out"<<endl;
         cout<<"D) First In, Last Out"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count3++;
       }
        break;
}


case 4:{
       if(count4 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": In financial markets, what does the acronym IPO represent?"<<endl;
         cout<<"A) Initial Public Offering"<<endl;
         cout<<"B) International Portfolio Organization"<<endl;
         cout<<"C) Investment Policy Outline"<<endl;
         cout<<"D) Institutional Purchase Order"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count4++;
       }
        break;
}


case 5:{
       if(count5 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the function of a central bank in a country's economy"<<endl;
         cout<<"A) Regulate commercial banks"<<endl;
         cout<<"B) Issue and manage currency"<<endl;
         cout<<"C) Control inflation and interest rates"<<endl;
         cout<<"D) All of the above"<<endl;
         cin>>choice;
         if(choice == 'd'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count5++;
       }
        break;
}



case 6:{
       if(count6 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the purpose of a SWOT analysis in business strategy?"<<endl;
         cout<<"A) Evaluate internal and external factors"<<endl;
         cout<<"B) Calculate financial ratios"<<endl;
         cout<<"C) Forecast future sales"<<endl;
         cout<<"D) Implement cost-cutting measures"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count6++;
       }
        break;
}


case 7:{
       if(count7 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What does the term 'FIFO' stand for in inventory accounting?"<<endl;
         cout<<"A) First In, First Out"<<endl;
         cout<<"B) Last In, First Out"<<endl;
         cout<<"C) First In, Last Out"<<endl;
         cout<<"D) Last In, Last Out"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count7++;
       }
        break;
}


case 8:{
       if(count8 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the purpose of a letter of credit in international trade?"<<endl;
         cout<<"A) Guarantee payment to the seller"<<endl;
         cout<<"B) Insure goods during shipment"<<endl;
         cout<<"C) Provide a discount to the buyer"<<endl;
         cout<<"D) Specify product quality standards"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count8++;
       }
        break;
}



case 9:{
   questionCount = questionCount+1;
       if(count9 == 2){
        continue;
       }
       else {
         cout<<questionCount<<": What is the formula for calculating net profit?"<<endl;
         cout<<"A) Revenue - Expenses"<<endl;
         cout<<"B) Revenue / Expenses"<<endl;
         cout<<"C) Revenue + Expenses"<<endl;
         cout<<"D) Revenue x Expenses"<<endl;
         cin>>choice;
         if(choice == 'a'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count9++;
       }
        break;
}



       default:{
 if(count10 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the purpose of a cash flow statement in financial reporting?"<<endl;
         cout<<"A) Show the profitability of a business"<<endl;
         cout<<"B) Present the financial position at a specific date"<<endl;
         cout<<"C) Provide information on cash inflows and outflows"<<endl;
         cout<<"D) Calculate return on investment"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count10++;
       }


        break;
       }
       }
    }
    Result(marks_count,questionCount);
    cout<<"Try Again? Press 'y' or 'n' ";
    cin>>ch;
      }while(ch == 'y');
  }

};
class Arts: public Quiz{
public:
  void Questions(){
   do{
    cout<<"********** Arts **********"<<endl<<endl;
    DataInput();
      int marks_count = 0, questionCount=0;
 int count1=1,count2=1,count3=1,count4=1,count5=1,count6=1,count7=1,count8=1,count9=1,count10=1;
    for(int i = 0; i<=20; i++){
      srand(time(0));
     random_number = rand()%10; 


       switch (random_number)
       {
       case 1:
       {
       if(count1 == 2){
        continue;
       }
       else {
          questionCount = questionCount+1;
         cout<<questionCount<<": Who is considered the father of modern abstract art?"<<endl;
         cout<<"A) Pablo Picasso"<<endl;
         cout<<"B) Wassily Kandinsky"<<endl;
         cout<<"C) Leonardo da Vinci"<<endl;
         cout<<"D) Vincent van Gogh"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count1++;
       }
        break;
       }
       


case 2:{
       if(count2 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which art movement is known for its use of everyday objects and images from popular culture?"<<endl;
         cout<<"A) Cubism"<<endl;
         cout<<"B) Surrealism"<<endl;
         cout<<"C) Pop Art"<<endl;
         cout<<"D) Impressionism"<<endl;
         cin>>choice;
         if(choice == 'c'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count2++;
       }
        break;
}


case 3:{
       if(count3 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Who painted the famous artwork 'Starry Night' ?"<<endl;
         cout<<"A) Claude Monet"<<endl;
         cout<<"B) Vincent van Gogh"<<endl;
         cout<<"C) Salvador Dalí"<<endl;
         cout<<"D) Leonardo da Vinci"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count3++;
       }
        break;
}


case 4:{
       if(count4 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is chiaroscuro in art?"<<endl;
         cout<<"A) A painting technique using bright colors"<<endl;
         cout<<"B) AThe use of strong contrasts between light and dark"<<endl;
         cout<<"C) Abstract expressionism"<<endl;
         cout<<"D) A style of sculpture"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count4++;
       }
        break;
}


case 5:{
       if(count5 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Who is known for creating the 'Campbell's Soup Cans' artwork?"<<endl;
         cout<<"A) Jackson Pollock"<<endl;
         cout<<"B) Andy Warhol"<<endl;
         cout<<"C) Frida Kahlo"<<endl;
         cout<<"D) Georgia O'Keeffe"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count5++;
       }
        break;
}



case 6:{
       if(count6 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Which artistic movement emerged in the early 20th century and focused on irrational and subconscious ideas?"<<endl;
         cout<<"A) Cubism"<<endl;
         cout<<"B) Dadaism"<<endl;
         cout<<"C) Fauvism"<<endl;
         cout<<"D) Abstract Expressionism"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count6++;
       }
        break;
}


case 7:{
       if(count7 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": Who is known for creating large-scale environmental artworks, often using natural materials?"<<endl;
         cout<<"A) Yayoi Kusama"<<endl;
         cout<<"B) Christo and Jeanne-Claude"<<endl;
         cout<<"C) Banksy"<<endl;
         cout<<"D) Damien Hirst"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count7++;
       }
        break;
}


case 8:{
       if(count8 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What is the primary medium used in traditional Japanese ink painting?"<<endl;
         cout<<"A) Oil paint"<<endl;
         cout<<"B) Watercolor"<<endl;
         cout<<"C) Acrylic paint"<<endl;
         cout<<"D) Sumi-e ink"<<endl;
         cin>>choice;
         if(choice == 'd'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count8++;
       }
        break;
}



case 9:{
   questionCount = questionCount+1;
       if(count9 == 2){
        continue;
       }
       else {
         cout<<questionCount<<": Who is associated with the artistic style known as 'Surrealism'?"<<endl;
         cout<<"A)  Pablo Picasso"<<endl;
         cout<<"B) Salvador Dalí"<<endl;
         cout<<"C) Henri Matisse"<<endl;
         cout<<"D) Marc Chagall"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count9++;
       }
        break;
}



       default:{
 if(count10 == 2){
        continue;
       }
       else {
         questionCount = questionCount+1;
         cout<<questionCount<<": What does the term 'Impasto' refer to in painting?"<<endl;
         cout<<"A) A painting technique with thin, transparent layers"<<endl;
         cout<<"B) The use of bold, thickly textured paint"<<endl;
         cout<<"C) A style of abstract expressionism"<<endl;
         cout<<"D) The representation of everyday scenes"<<endl;
         cin>>choice;
         if(choice == 'b'){
            marks_count = marks_count+1;
         }
         else{
            marks_count = marks_count+0;
         }
         count10++;
       }


        break;
       }
       }
    }
    Result(marks_count,questionCount);
    cout<<"Try Again? Press 'y' or 'n' ";
    cin>>ch;
      }while(ch == 'y');

  }

};
int main()
{
    ComputerScience ComputerScienceQuiz;
    Medicine MedicineQuiz;
    Commerce CommerceQuiz;
    Arts ArtsQuiz;
    char choice ,ch;
    do{
     cout<<"********** Welcome to the Quiz Application **********"<<endl<<endl<<endl;
     cout<<"The Questions will be according to your Interest. Please make your choice"<<endl;
     cout<<"A) Computer Science"<<endl;
     cout<<"B) Medicine"<<endl;
     cout<<"C) Commerce"<<endl;
     cout<<"D) Arts"<<endl;
     cin>>choice;
     switch (choice)
     {
     case 'a': 
     ComputerScienceQuiz.Questions();
        break;
     case 'b':
     MedicineQuiz.Questions();
     break;
     case 'c':
     CommerceQuiz.Questions();
     break;
     case 'd':
     ArtsQuiz.Questions();
     break;
     default:
     cout<<"Please select valid option";
        break;
     }
     cout<<"Try Another or Same Field? Press 'y' or 'n' "<<endl;
     cin>>ch;
    }while(ch == 'y');
    return 0;
}