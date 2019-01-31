#include <bits/stdc++.h> 
#include <fstream> 
  
using namespace std; 
  
int main() 
{ 
	string line;
	
  
    ifstream file ("H:\\Projects\\Projects of denofprojects\\projects\\aspnet\\aspnet.txt");
		if(file.is_open()){
		while(getline(file,line)){
			//string s="H:\\Projects\\Projects of denofprojects\\projects\\android\\";
			string s="H:\\Projects\\Projects of denofprojects\\projects\\aspnet\\";
			s+=line;
			s+="\\";
			s+="Readme.docx";
			char *ch=new char[s.size()];
			for(int i=0;i<s.size();i++){
				ch[i]=s[i];
			}
		//	cout<<endl<<s<<endl;
			if (remove(ch) == 0) 
		      printf("Deleted successfully\n"); 
		   else
		      printf("Unable to delete the file\n"); 
		     // cout<<s<<endl;
		}
		file.close();
		}else
		cout<<"Unable to open file";
  
    return 0; 
} 

