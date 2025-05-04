#include<iostream>
 #include<fstream>
 using namespace std;
 
 class Book{
 
     string id,name,author,search;
     fstream file;
     public:
     void addBook();
     void showAll();
     void extractBook();
     void searchBook();
 
 }obj;
 
 int main(){
     
    while(true) {

     char choice;
     cout<<"----------------------------------"<<endl;
     cout<<"1-Show All Books"<<endl;
     cout<<"2-Extract Book"<<endl;
     cout<<"3-Add books(ADMIN)"<<endl;
     cout<<"4-Search Book"<<endl;
     cout<<"5-Exit"<<endl;
     cout<<"----------------------------------"<<endl;
     cout<<"Enter Your Choice :: ";
     cin>>choice;
 
     switch(choice){
         case '1':
             cin.ignore();
             obj.showAll();
         break;
         case '2':
             cin.ignore();
             obj.extractBook();
         break;
         case '3':
             cin.ignore();
             obj.addBook();
         break;
         case '4':
             cin.ignore();
             obj.searchBook();
         break;
         case '5':
         cout<<"Successfully Exited!!";
             return 0;
         break;
         default:
             cout<<"Invalid Choice...!";
     }
    }
 
     return 0;
 
}

 void Book :: addBook(){
     cout<<"\nEnter Book ID :: ";
     getline(cin,id);
     cout<<"Enter Book Name :: ";
     getline(cin,name);
     cout<<"Enter Book's Author name :: ";
     getline(cin,author);
     cout<<"Book Added Successfully...!";
 
     file.open("bookData.txt",ios :: out | ios :: app);
     file<<id<<"*"<<name<<"*"<<author<<endl;
     file.close();
 }

 void Book :: showAll(){
     file.open("bookData.txt",ios :: in);
     getline(file,id,'*');
     getline(file,name,'*');
     getline(file,author,'\n');
         cout<<"\n\n";
         cout<<"\t\t Book Id: \t\t\t Book Name: \t\t\t Author's Name: "<<endl;
     while(!file.eof()){
         cout<<"\t\t "<<id<<" \t\t\t\t "<<name<<" \t\t\t "<<author<<endl;
 
         getline(file,id,'*');
     getline(file,name,'*');
     getline(file,author,'\n');
     }
     file.close();
 }

 void Book :: extractBook(){
 
     showAll();
     cout<<"Enter Book Id :: ";
     getline(cin,search);
 
     file.open("bookData.txt",ios :: in);
     getline(file,id,'*');
     getline(file,name,'*');
     getline(file,author,'\n');
 
     cout<<"\n\n";
     cout<<"\t\t Book Id: \t\t\t Book Name: \t\t\t Author's Name: "<<endl;
     while(!file.eof()){
         if(search == id){
             cout<<"\t\t "<<id<<" \t\t\t "<<name<<" \t\t\t "<<author<<endl;
             cout<<"Book Extracted Successfully...!";
         }
     getline(file,id,'*');
     getline(file,name,'*');
     getline(file,author,'\n');
     }
     file.close();
 }

void Book::searchBook() {
        int choice;
        cout << "\nSearch by:\n";
        cout << "1. Book Name\n";
        cout << "2. Author Name\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear input buffer
    
        cout << "Enter Search Term: ";
        getline(cin, search);
    
        file.open("bookData.txt", ios::in);
        if (!file) {
            cout << "Error opening file.\n";
            return;
        }
    
        bool found = false;
        while (getline(file, id, '*') && getline(file, name, '*') && getline(file, author)) {
            if ((choice == 1 && name == search) || (choice == 2 && author == search)) {
                if (!found) {
                    cout << "\n\n";
                    cout << "\t\t Book Id: \t\t\t Book Name: \t\t\t Author's Name:\n";
                }
                cout << "\t\t " << id << " \t\t\t " << name << " \t\t\t " << author << endl;
                found = true;
            }
        }
    
        if (!found)
            cout << "No matching book found.\n";
    
        file.close();
    }
    